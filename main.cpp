#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

using namespace std;
int main(){
    Player* player1 = new Human("ngoc");
    Player* player2 = new Human("Khanh");
    
    Referee referee;

    Player* winner = referee.refGame(player1, player2);

    if (winner != nullptr) cout << winner->getName() << " Wins";
    else cout << "It's a tie";

}