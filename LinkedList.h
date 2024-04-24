#ifndef LINKLIST
#define LINKLIST

#include "Node.h"

class LinkedList {
    private:
        Node * head;
    public:
        LinkedList();
        LinkedList(int* array, int len);
        ~LinkedList();
        Node* traverse(int pos);
        void insertPosition(int pos, int newNum);
        bool deletePosition(int pos);
        int get(int pos);
        int search(int target);
        void printList();
};

#endif