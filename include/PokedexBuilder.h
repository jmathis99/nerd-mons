#ifndef POKEDEXBUILDER_H
#define POKEDEXBUILDER_H
#include <string>
#include <iostream>
#include "enums.h"

// using namespace std;

// This is the data structure for a base stats/pokedex entry.
// The pokedex will be stored as an array of these structs.
struct PokedexEntry {
    std::string name;
    std::string nickname;
    std::string description;
    unsigned short height;
    unsigned short weight;
    unsigned char stats[6];
    pk::Ability ability1;
    pk::Ability ability2;
    pk::Ability hidden;

    void makeStats(unsigned char newStats[6])
    {
        for (int i=0; i<6; i++)
        {
            this->stats[i] = newStats[i];
        }
    }
};

namespace pk {

    static const unsigned short NUM_POKEMON = 2;
    static PokedexEntry Pokedex[NUM_POKEMON];
    void BuildPokedex(PokedexEntry* pokedex);
}



#endif // POKEDEXBUILDER_H
