#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED
#include <iostream>

using namespace std;

void tablero(int table[9])
{
    cout << "    1   2   3" << endl << "  -------------" << endl;
    for(int i = 0; i < 9; i++)
    {

        if (i == 0)
        {
            cout << "a ";
        }
        else if (i == 3)
        {
            cout << "b ";
        }
        else if (i == 6)
        {
            cout << "c ";
        }
        else
        {
            cout << " ";
        }
        cout << "| ";
        if(table[i] == 1)
        {
            cout << "X";
        }
        else if(table[i] == 2)
        {
            cout << "O";
        }
        else
        {
            cout << " ";
        }
        if(i == 2 || i == 5 || i == 8)
        {
            cout << " |";
            cout << endl;
            if(i != 8)
            {
                cout << "  |-----------|" << endl;
            }
            else
            {
                cout << "  -------------" << endl;
            }
        }
    }
}

#endif // BOARD_H_INCLUDED
