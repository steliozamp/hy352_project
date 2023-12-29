#ifndef POKEMON_CHARACTERS_H
#define POKEMON_CHARACTERS_H

#include <iostream>
#include <string>

using namespace std;

#define BEGIN_GAME \
    int main()     \
    {              \
        cout << "Let the battle begin!" << endl;

#define END_GAME                    \
    cout << "The battle has ended!" \
         << endl;                   \
    return 0;                       \
    }



#endif