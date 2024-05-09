#include "Trie.h"

Trie::Trie(){
    root = new TrieNode();
}

void Trie::getWordFromPrefix(TrieNode* currNode, std::string prefix, std::vector<std::string>& res){
    if (currNode->isEndOfWord == true){
        res.push_back(prefix);
    }
    auto childlist = currNode->childNodes;

    for (auto it = childlist.begin(); it != childlist.end(); it++){
        getWordFromPrefix(it->second, prefix + it->first, res);
    }
}


std::vector<std::string> Trie::getSuggestions(std::string partialWord){
    std::vector<std::string> res_arr;
    std::string res;
    
    if (partialWord.size() == 0) return res_arr;

    TrieNode* currNode = root;

    for (unsigned int i = 0; i < partialWord.size(); i++){
        std::string tmp = partialWord.substr(i, 1);

        if (currNode->childNodes[tmp] != nullptr){
            res = res + tmp;
            currNode = currNode->childNodes[tmp];
        }
        else {
            break;
        }
    }

    getWordFromPrefix(currNode, "", res_arr);

    for (auto &wd: res_arr){
        wd = res + wd;
    }
    
    return res_arr;
}

void Trie::insert(std::string word){
    TrieNode* currNode = root;
    for (unsigned int i = 0; i < word.size(); i++){
        std::string tmp = word.substr(i,1);
        if (currNode->childNodes[tmp] == nullptr){
            TrieNode* newNode = new TrieNode();
            currNode->childNodes[tmp] = newNode;
        }
        currNode = currNode->childNodes[tmp];
    }

    currNode->isEndOfWord=true;
}