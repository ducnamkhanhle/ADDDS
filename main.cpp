#include "Trie.h"
#include "PrefixMatcher.h"

int main(){
    // Trie myTrie;

    // myTrie.insert("Alex");
    // myTrie.insert("Alexstupid");
    // myTrie.insert("Alexstupidanddump");

    // //myTrie.printTrie();

    // std::vector<std::string> ans = myTrie.getSuggestions("Alex");

    // for (auto it:ans){
    //     std::cout << it << std::endl;
    // }

    PrefixMatcher network;

    network.insert("1100110111", 1);
    network.insert("110011011", 2);
    network.insert("11001101", 3);

    std::cout << network.selectRouter("110011011001") << std::endl;

}