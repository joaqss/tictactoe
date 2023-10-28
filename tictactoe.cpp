#include <iostream>
using namespace std;

void game() {

    bool continuePlay = true;
    bool hasWinner = false;
    bool isValid = false;
    bool Player1Bool = true;
    bool Player2Bool = false;
    char player1 = 'X';
    char player2 = 'O';
    char input;
    const int gameArrayRow = 3;
    const int gameArrayCol = 3;
    char gameArray[gameArrayRow][gameArrayCol] = 
    {'1', '2', '3', 
    '4', '5', '6', 
    '7', '8', '9'};

    char gameArrayOriginal[3][3] = 
    {'1', '2', '3', 
    '4', '5', '6', 
    '7', '8', '9'};

    char placeholderArray[9] = {'0', '0', '0', '0', '0', '0', '0', '0','0'};
    int col, row;
    int moves = 0;

    do { // play again
        do { // has winner

            cout << "\n\n\n";

            // IF STATEMENT FOR ALTERNATING
            if (Player1Bool == true) {

                do {
                    
                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }


                    cout << "\nPlayer 1[X]" << endl;
                    cout << "Please input valid grid number: "; cin >> input; cin.ignore();

                    // place the placechecker code here
                    int phChecker = input - '1';
                    if (placeholderArray[phChecker] == 'O' || placeholderArray[phChecker] == 'X') {
                        cout << "The grid number you've entered is occupied. Enter another option.\n";
                        system("pause"); system("cls");
                    }

                    else {
                        isValid = true;

                        switch (input) {
                            case '1':
                                gameArray[0][0] = player1;
                                placeholderArray[0] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '2':
                                gameArray[0][1] = player1;
                                placeholderArray[1] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '3':
                                gameArray[0][2] = player1;
                                placeholderArray[2] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '4':
                                gameArray[1][0] = player1;
                                placeholderArray[3] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '5':
                                gameArray[1][1] = player1;
                                placeholderArray[4] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '6':
                                gameArray[1][2] = player1;
                                placeholderArray[5] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '7':
                                gameArray[2][0] = player1;
                                placeholderArray[6] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '8':
                                gameArray[2][1] = player1;
                                placeholderArray[7] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;

                            case '9':
                                gameArray[2][2] = player1;
                                placeholderArray[8] = player1;
                                Player1Bool = false;
                                Player2Bool = true;
                                moves++;
                                system("cls");
                                break;
                            default:
                                cout << "Invalid input." << endl;
                                break;
                        }
                    }

                } while (isValid != true);
                
            } 

            else {
                
                do {
                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }
                    
                    cout << "\nPlayer 2[O]" << endl;
                    cout << "Please input valid grid number: "; cin >> input; cin.ignore();


                    // place the placechecker code here

                    int phChecker = input - '1';
                    if (placeholderArray[phChecker] == 'X' || placeholderArray[phChecker] == 'O') {
                        cout << "The grid number you've entered is occupied. Enter another option.\n";
                        system("pause"); system("cls");
                    }

                    else {
                        isValid = true;

                        switch (input) {
                        case '1':
                            gameArray[0][0] = player2;
                            placeholderArray[0] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '2':
                            gameArray[0][1] = player2;
                            placeholderArray[1] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '3':
                            gameArray[0][2] = player2;
                            placeholderArray[2] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '4':
                            gameArray[1][0] = player2;
                            placeholderArray[3] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '5':
                            gameArray[1][1] = player2;
                            placeholderArray[4] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '6':
                            gameArray[1][2] = player2;
                            placeholderArray[5] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '7':
                            gameArray[2][0] = player2;
                            placeholderArray[6] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '8':
                            gameArray[2][1] = player2;
                            placeholderArray[7] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;

                        case '9':
                            gameArray[2][2] = player2;
                            placeholderArray[8] = player2;
                            Player2Bool = false;
                            Player1Bool = true;
                            moves++;
                            system("cls");
                            break;
                        default:
                            cout << "Invalid input." << endl;
                            break;
                        }
                    }

                } while (isValid != true);

                
            }
            
            ///////////////////////////////////////////////////////////////////////////////////
            
            int a;
            for (a = 0; a < 3; a++) {
                // check row
                if (gameArray[a][0] == gameArray[a][1] && gameArray[a][1] == gameArray[a][2]) {
                    hasWinner = true;

                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }

                    if (Player1Bool == false) {
                        cout << "\nPlayer 1 Wins!";
                    }

                    else {
                        cout << "\nPlayer 2 Wins!";
                    }
                }

                // check column
                if (gameArray[0][a] == gameArray[1][a] && gameArray[1][a] == gameArray[2][a]) {
                    hasWinner = true;

                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }

                if (Player1Bool == false) {
                        cout << "\nPlayer 1 Wins!";
                        break;
                    }

                    else {
                        cout << "\nPlayer 2 Wins!";
                        break;
                    }
                }
                
                // check diagonals
                if (gameArray[0][0] == gameArray[1][1] && gameArray[1][1] == gameArray[2][2]) {
                    hasWinner = true;

                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }

                if (Player1Bool == false) {
                        cout << "\nPlayer 1 Wins!";
                        break;
                    }

                    else {
                        cout << "\nPlayer 2 Wins!";
                        break;
                    }
                }    

                // check diagonals       
                if (gameArray[0][2] == gameArray[1][1] && gameArray[1][1] == gameArray[2][0]) {
                    hasWinner = true;

                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }

                if (Player1Bool == false) {
                        cout << "\nPlayer 1 Wins!";
                        break;
                    }

                    else {
                        cout << "\nPlayer 2 Wins!";
                        break;
                    }
                }

                if (moves == 9 && !hasWinner)  {
                    // To print the table
                    for (col = 0; col < 3; col++) {
                        cout << "\n\n\t\t\t| ";

                        for (row = 0; row < 3; row++) {
                            cout << gameArray[col][row] << " | ";
                        }
                    }
                    cout << "\nIt's a draw!";
                    hasWinner = true;
                    break;

                }    
            }    

        } while (hasWinner != true);

        char playAgain;
        cout << "\nDo you want to play again [Y/N]? "; cin >> playAgain; cin.ignore();

        switch (playAgain) {
            case 'Y':
            case 'y':
                hasWinner = false;
                isValid = false;
                Player1Bool = true;
                Player2Bool = false;
                moves = 0;


                // reset placeholder values
                int a, b;
                for (a=0; a<=8; a++) {
                    placeholderArray[a] = '0';
                }

                // reset board values
                for (a=0; a<3; a++) {
                    for (b=0; b<3; b++) {
                        gameArray[a][b] = gameArrayOriginal[a][b];

                    }
                }

                system("cls");
                break;

            case 'N':
            case 'n':
                cout <<"\nThanks for playing. Bye!";
                continuePlay = false;
                break;
            default:
                cout << "invalid input.";
                break;
        }

    } while (continuePlay != false);

}



int main() {
    game();
}
