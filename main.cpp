#include "Trie.h"


int main(){
    Trie myTrie;

    myTrie.insert("bin");
    myTrie.insert("ball");
    myTrie.insert("ballet");

    //myTrie.printTrie();

    std::vector<std::string> ans = myTrie.getSuggestions("balle");

    for (auto it:ans){
        std::cout << it << std::endl;
    }
}