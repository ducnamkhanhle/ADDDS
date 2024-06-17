#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    docList[id] = std::make_tuple(name, license_limit, 0);
}

void DocumentManager::addPatron(int patronID){
    patronList.push_back(patronID);
}

int DocumentManager::search(std::string name){
    for (const auto &it:docList){
        if (std::get<0>(it.second) == name){
            return it.first;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID){
    auto &it = docList[docid];
    auto &numOfCopies = std::get<2>(it);
    auto findPatron_it = std::find(patronList.begin(), patronList.end(), patronID);

    if (std::get<0>(it) == "") {
        return false;
    }

    if (findPatron_it == patronList.end()){
        return false;
    }

    if (numOfCopies == std::get<1>(it)){
        return false;
    }

    numOfCopies += 1;
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID){
    auto &it = docList[docid];
    auto &numOfCopies = std::get<2>(it);
    numOfCopies -= 1;
}
