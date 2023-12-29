#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Pokemon;
class Ability;

struct Types {
    Pokemon *pokemon_tmp;
};

class Pokemon
{
private:
    string _name;
    string _type;
    int _max_hp;
    int _hp;

public:
    Pokemon();
    Pokemon(string name, string type, int hp);
    ~Pokemon();

    string getName()
    {
        return _name;
    }
    string getType()
    {
        return _type;
    }

    int getHp()
    {
        return _hp;
    }

    void setName(string name)
    {
        this->_name = name;
    }

    void setType(string type)
    {
        this->_type = type;
    }

    void setHp(int hp)
    {
        this->_hp = hp;
    }

    void getDetails()
    {
        cout << "Name: " << _name << endl;
        cout << "Type: " << _type << endl;
        cout << "HP: " << _hp << endl;
    }
};


#endif