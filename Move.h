#ifndef MOVE
#define MOVE
#include<string>
#include<vector>

class Move{
    protected:
        std::vector<std::string> looseList;
    public:
        Move();
        virtual std::string getName();
        virtual std::vector<std::string> getLooseList();
        bool isLoostAgainst(Move* move1, Move* move2);
        bool isDrawAgains(Move* move1, Move* move2);

};

#endif