#ifndef EMPTYPLACES_H_INCLUDED
#define EMPTYPLACES_H_INCLUDED
#include <iostream>

using namespace std;

bool emptyPleaces(int table[9])
{
    int cont = 0;
    for(int i = 0; i < 10; i++)
    {
        if(table[i] != 0)
        {
            cont++;
        }
    }
    if(cont != 9)
    {
        return false;
    }
    else
    {
        return true;
    }
}

#endif // EMPTYPLACES_H_INCLUDED
