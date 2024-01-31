#include <iostream>
using namespace std;
void draw();
int checkwin();
void start();
void choiceCheck(int choice, char mark, int player);
char square[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player = 1;

int main()
{
    start();
}
void draw()
{
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   |   " << square[0] << "   |   " << square[1] << "   |   " << square[2] << "   |   " << endl;
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   __________________________" << endl;
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   |   " << square[3] << "   |   " << square[4] << "   |   " << square[5] << "   |   " << endl;
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   __________________________" << endl;
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   |   " << square[6] << "   |   " << square[7] << "   |   " << square[8] << "   |   " << endl;
    cout << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   "
         << " "
         << "   |   " << endl;
    cout << "   __________________________" << endl;
}
int checkwin()
{
    if (square[0] == square[1] && square[1] == square[2])
        return 1;
    else if (square[3] == square[4] && square[4] == square[5])
        return 1;
    else if (square[6] == square[7] && square[7] == square[8])
        return 1;
    else if (square[0] == square[3] && square[3] == square[6])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[0] == square[4] && square[4] == square[8])
        return 1;
    else if (square[2] == square[4] && square[4] == square[6])
        return 1;
    else if (square[0] != '1' && square[1] != '2' && square[2] != '3' &&
             square[3] != '4' && square[4] != '5' && square[5] != '6' &&
             square[6] != '7' && square[7] != '8' && square[8] != '9')
        return 0;
    return -1;
}
void start()
{
    int i, choice;
    char mark;
    do
    {
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        cout << " player " << player << endl;
        ///
        draw();
        cout << "mark with numbers from case 1 to 9" << endl;
        cin >> choice;
        choiceCheck(choice, mark, player);
        i = checkwin();
        player++;
    } while (i == -1);
    if (i == 1)
    {
        draw();
        cout << "Congratulations Player " << player << " you won!" << endl;
    }
    else
    {
        draw();
        cout << "Draw game" << endl;
    }
}
void choiceCheck(int choice, char mark, int player)
{
    if (choice == 1 && square[0] == '1')
        square[0] = mark;
    else if (choice == 2 && square[1] == '2')
        square[1] = mark;
    else if (choice == 3 && square[2] == '3')
        square[2] = mark;
    else if (choice == 4 && square[3] == '4')
        square[3] = mark;
    else if (choice == 5 && square[4] == '5')
        square[4] = mark;
    else if (choice == 6 && square[5] == '6')
        square[5] = mark;
    else if (choice == 7 && square[6] == '7')
        square[6] = mark;
    else if (choice == 8 && square[7] == '8')
        square[7] = mark;
    else if (choice == 9 && square[8] == '9')
        square[8] = mark;
    else
    {
        cout << "Invalid move, please try again." << endl;
        cin.ignore();
        player--;
    }
}
