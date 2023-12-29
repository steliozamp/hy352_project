#ifndef POKEMON_GAME_MACROS_H
#define POKEMON_GAME_MACROS_H

#include "pokemon.hpp"
#include <iostream>

using namespace std;

#define BEGIN_GAME          \
    int main()              \
    {                       \
        Types tempObjects; \
        cout << "--------------------------------------------------POKEMON THE GAME-------------------------------------------" << endl;

#define END_GAME                                               \
    cout << "Thank you for playing the Pokemon Game!" << endl; \
    return 0;                                                  \
    }

#define CREATE ;

#define POKEMON
#define NAME name
#define TYPE type
#define HP hp


#endif