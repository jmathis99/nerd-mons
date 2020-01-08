#include <iostream>
#include <string>
#include "PokedexBuilder.h"

using namespace std;

int main()
{
    //Build Pokedex on Startup
    pk::BuildPokedex(pk::Pokedex);

    cout << pk::Pokedex[1].stats[5] << endl;
    cout << pk::AbilityStrings[pk::Pokedex[0].ability1];

    return 0;
}
