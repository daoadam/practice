#include <iostream>
#include <string>
#include <ctime>
using namespace std;


//TicTacToe game

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);


int main()
{
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;


    drawBoard(spaces); //array decays into a pointer and prints out the board

    while(running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
    }
}

void drawBoard(char *spaces){
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;

    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
    cout << endl;
    
}
void playerMove(char *spaces, char player){
    int number; 
    do{
        cout << "Please enter a spot to place a marker (1-9): ";
        cin >> number;
        if(number < 0 || number > 10)
        {
            cout << "Please enter a valid number from (1-9) \n";
        }

        else if(spaces[number - 1] != ' ')
        {
            cout << "Please choose another square from (1-9) \n";
        }

        else
        {
            spaces[number - 1] = player;
            break;
        }
    }while(true);
}
void computerMove(char *spaces, char computer){

}
bool checkWinner(char *spaces, char player, char computer){

    return 0;
}
bool checkTie(char *spaces){

    return 0;
}