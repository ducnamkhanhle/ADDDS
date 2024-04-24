#include "LinkedList.h"
#include <limits>
#include <iostream>


LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    head = new Node(array[0], nullptr);
    // std::cout << head->data << " "<< head->link <<std::endl;
        // this->printList();
    Node* curr = head;
    for (unsigned int i = 1; i < len; i++){
        curr->link = new Node(array[i], nullptr);
        curr = curr->link;
        // this->printList();
    }
}

LinkedList::~LinkedList(){
    while (head != nullptr){
        deletePosition(0);
    }
}
Node* LinkedList::traverse(int pos){
    unsigned int curr_pos = 0;
    Node* currNode = head;

    while (currNode != nullptr && curr_pos < pos){
        curr_pos++;
        currNode = currNode->link;
    }
    
    return currNode;
}

void LinkedList::insertPosition(int pos, int newNum){
    if (pos == 0){
        head = new Node(newNum, head);
        return;
    }

    Node* prevNode = traverse(pos - 2);
    if (prevNode == nullptr){
        return;
    }

    Node* newNode = new Node(newNum, prevNode->link);
    prevNode->link = newNode;
}   

bool LinkedList::deletePosition(int pos){
    if (pos == 0 && head == nullptr){
        return false;
    }
    while (pos == 0){
        Node* tmp = head;
        head = head->link;
        delete tmp;
        return true;
    }

    Node* prevNode = traverse(pos - 2);
    if (prevNode == nullptr) return false;
    Node* curr_node = prevNode->link;
    prevNode->link = curr_node->link;
    delete curr_node;
    return true;
}

int LinkedList::get(int pos){
    Node* curr_node = traverse(pos - 1);

    if (curr_node == nullptr) return std::numeric_limits < int >::max();

    return curr_node -> data;
}

int LinkedList::search(int target){
    unsigned int curr_pos = 0;
    Node* currNode = head;

    while (currNode != nullptr && currNode->data != target){
        curr_pos++;
        currNode = currNode->link;
    }
    
    if (currNode == nullptr) return -1;
    return curr_pos;
}

void LinkedList::printList(){
    Node* currNode = head;
    if (head == nullptr) return;

    std::cout << "[";
    while (currNode != nullptr){
        if (currNode->link == nullptr ) std::cout << currNode->data;
        else std::cout << currNode->data << " ";
        currNode = currNode->link;
    }
    std::cout << "]";


}
