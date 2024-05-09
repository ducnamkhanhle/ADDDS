#ifndef PREFIXMATCHER
#define PREFIXMATCHER

#include "Trie.h"

class PrefixMatcher
{
    private:
        std::unordered_map<std::string, int> router;
        Trie myTrie;
    
    public:
        PrefixMatcher();
        int selectRouter(std::string networkAddress);
        void insert(std::string address, int routerNumber);  
   

};

#endif