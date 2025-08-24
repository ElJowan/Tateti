#ifndef POSICIONADOR_H_INCLUDED
#define POSICIONADOR_H_INCLUDED
#include <iostream>

using namespace std;

int posicionador(char pos[3])
{
    int realpos;
    switch(pos[0])
    {
    case 'a':
        realpos = 0;
        break;
    case 'b':
        realpos = 3;
        break;
    case 'c':
        realpos = 6;
        break;
    default:
        cout << "Casilla no reconocida" << endl << "Intentelo nuevamente "<< endl;
        system("pause");
        return -1;
        break;
    }
    switch(pos[1])
    {
    case '1':
        realpos += 0;
        break;
    case '2':
        realpos += 1;
        break;
    case '3':
        realpos += 2;
        break;
    default:
        cout << "Casilla no reconocida" << endl << "Intentelo nuevamente "<< endl;
        system("pause");
        return -1;
        break;
    }
    return realpos;
}

#endif // POSICIONADOR_H_INCLUDED
