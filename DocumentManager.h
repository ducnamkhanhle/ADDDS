#ifndef DOCUMENTMANAGER
#define DOCUMENTMANAGER

#include<string>
#include<unordered_map>
#include<tuple>
#include<vector>
#include <algorithm>


class DocumentManager{
    private:
        std::unordered_map<int, std::tuple<std::string,int, int>> docList;
        std::vector<int> patronList;
    public:
        DocumentManager();
        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name);
        bool borrowDocument(int docid, int patronID);  
        void returnDocument(int docid, int patronID);
};

#endif