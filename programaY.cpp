#include <iostream>
using namespace std;

void drawBoard(char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer);
bool checkWinner(char* spaces, char player, char computer);
bool checkTie(char* spaces);

int main()
{
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);


}

void drawBoard(char* spaces) {
    cout << "     |     |     " << endl;
    cout << "     |     |     " << endl;
    cout << "     |     |     " << endl;
}
void playerMove(char* spaces, char player) {

}
void computerMove(char* spaces, char computer) {

}
bool checkWinner(char* spaces, char player, char computer) {
    return 0;
}
bool checkTie(char* spaces) {
    return 0;
}