#ifndef MOVE
#define MOVE
#include<string>
#include<vector>

class Move{
    public:
        Move();
        virtual std::string getName();
        virtual vector<int,std::string> getLooseList();
        bool isLoostAgainst(Move* move1, Move* move2);

};

#endif