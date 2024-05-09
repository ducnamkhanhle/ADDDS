#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    router = {};
}

void PrefixMatcher::insert(std::string address, int routerNumber){
    myTrie.insert(address);
    router[address] = routerNumber;

}

int PrefixMatcher::selectRouter(std::string networkAddress){
    std::string LongestPrf = myTrie.getLongestPrefix(networkAddress);
    if (LongestPrf.empty()){
        return -1;
    }

    else return router[LongestPrf];
}