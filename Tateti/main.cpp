#include <iostream>
#include "Board.h"
#include "posicionador.h"
#include "validator3000.h"
#include "emptyPlaces.h"

using namespace std;

int main()
{
    int table[9] {};
    char pos[3] {};
    int realpos = 0;
    int retorn = 0;
    do
    {
        //Turno PLAYER 1
        cout << "Turno del primer jugador: " << endl;
        tablero(table);
        if(emptyPleaces(table))
        {
            cout << "Ya esta loco, no hay mas lugar" << endl;
            return 0;
        }
        cin >> pos;
        while (posicionador(pos) == -1)
        {
            system("cls");
            cout << "Turno del primer jugador: " << endl;
            tablero(table);
            cin >> pos;
        }
        realpos = posicionador(pos);
        while (table[realpos] != 0)
        {
            system("cls");
            cout << "Turno del primer jugador: " << endl;
            tablero(table);
            cout << "Esta posicion esta ocupada" << endl << "Intente nuevamente" << endl;
            cin>>pos;
            realpos = posicionador(pos);
        }
        system("cls");
        table[realpos] = 1;
        if(validator3000(table, 1))
        {
            tablero(table);
            cout << "Ganaste jugador 1 felicidades!!! :D"<<endl;
            return 10;
        }

        //Turno PLAYER 2
        cout << "Turno del segundo jugador: " << endl;
        tablero(table);
        if(emptyPleaces(table))
        {
            cout << "Ya esta loco, no hay mas lugar" << endl;
            return 0;
        }
        cin >> pos;
        while (posicionador(pos) == -1)
        {
            system("cls");
            cout << "Turno del segundo jugador: " << endl;
            tablero(table);
            cin >> pos;
        }
        realpos = posicionador(pos);
        while (table[realpos] != 0)
        {
            system("cls");
            cout << "Turno del segundo jugador: " << endl;
            tablero(table);
            cout << "Esta posicion esta ocupada" << endl << "Intente nuevamente" << endl;
            cin>>pos;
            realpos = posicionador(pos);
        }
        system("cls");
        table[realpos] = 2;
        if(validator3000(table, 2))
        {
            tablero(table);
            cout << "Ganaste jugador 2 felicidades!!! :D"<<endl;
            return 20;
        }
        if(emptyPleaces(table))
        {
            cout << "Ya esta loco, no hay mas lugar" << endl;
            return 0;
        }
    }
    while (true);
    return 0;
}
