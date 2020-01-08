#include "PokedexBuilder.h"
#include <iostream>
#include "enums.h"

namespace pk
{

    void BuildPokedex(PokedexEntry* pokedex)
    {

        //MISSINGNO
        pokedex[0].name = "MissingNo.";
        pokedex[0].nickname = "MissingNo.";
        pokedex[0].description = "MissingNo.";
        pokedex[0].height = 0;
        pokedex[0].weight = 0;
        pokedex[0].makeStats(new unsigned char[6] {33, 136, 0, 6, 29, 204});
        pokedex[0].ability1 = pk::INTIMIDATE;
        pokedex[0].ability2 = pk::INTIMIDATE;
        pokedex[0].hidden = pk::INTIMIDATE;


        //BULBASAUR
        pokedex[1].name = "Bulbasaur";
        pokedex[1].nickname = "Seed";
        pokedex[1].description = "A strange seed was planted on its back at birth. The plant sprouts and grows with this Pokémon.";
        pokedex[1].height = 0;
        pokedex[1].weight = 0;
        pokedex[1].makeStats(new unsigned char[6] {45, 49, 49, 65, 65, 45});

    }

}

