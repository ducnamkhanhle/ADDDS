#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

using namespace std;
int main(){
    Player* player1 = new Human("Kevin");
    Player* player2 = new Computer();
    
    Referee referee;

    Player* winner = referee.refGame(player2, player1);

    if (winner != nullptr) cout << winner->getName() << " Wins";
    else cout << "It's a tie";
}