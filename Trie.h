#ifndef TRIE
#define TRIE

#include <vector>
#include <string>
#include <unordered_map> 
#include <iostream>

class Trie
{
private:
    struct TrieNode
    {
        bool isEndOfWord;
        std::unordered_map<std::string, TrieNode*> childNodes;
        TrieNode(){
            isEndOfWord = false;
            childNodes = {};
        }
    };
    
    
    TrieNode* getPrefix(std::string prefix, std::string& tranverse);
    TrieNode *root;

    void printTrieHelper(TrieNode* node, std::string currentPrefix) {
        if (node->isEndOfWord) {
            std::cout << currentPrefix << std::endl;
        }
        for (auto& child : node->childNodes) {
            printTrieHelper(child.second, currentPrefix + child.first);
        }
    }

public:
    Trie();
    void getWordFromPrefix(TrieNode* currNode, std::string prefix, std::vector<std::string>& res);
    std::vector<std::string> getSuggestions(std::string partialWord);
    void insert(std::string word); 
    void printTrie(TrieNode* currNode = nullptr) {
        if (currNode == nullptr) {
            currNode = root;
        }
        printTrieHelper(currNode, "");
    }

};

#endif