#ifndef VALIDATOR3000_H_INCLUDED
#define VALIDATOR3000_H_INCLUDED
#include <iostream>


using namespace std;

bool validator3000(int table[9], int numPly)
{
    ///
    if(table[0] == numPly && table[1] == numPly && table[2] == numPly)
    {
        return true;
    }
    if(table[3] == numPly && table[4] == numPly && table[5] == numPly)
    {
        return true;
    }
    if(table[6] == numPly && table[7] == numPly && table[8] == numPly)
    {
        return true;
    }
    ///
    if(table[0] == numPly && table[3] == numPly && table[6] == numPly)
    {
        return true;
    }
    if(table[1] == numPly && table[4] == numPly && table[7] == numPly)
    {
        return true;
    }
    if(table[2] == numPly && table[5] == numPly && table[8] == numPly)
    {
        return true;
    }
    ///
    if(table[0] == numPly && table[4] == numPly && table[8] == numPly)
    {
        return true;
    }
    if(table[2] == numPly && table[4] == numPly && table[6] == numPly)
    {
        return true;
    }
    else
    {
        return false;
    }
}

#endif // VALIDATOR3000_H_INCLUDED
