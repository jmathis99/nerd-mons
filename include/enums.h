#ifndef ENUMS_H_INCLUDED
#define ENUMS_H_INCLUDED

#include <string>

namespace pk{

    enum Item {
        AIR_BALLOON,
        AMULET_COIN,
        ASSAULT_VEST,
        BIG_ROOT,
        BINDING_BAND,
        BLACK_BELT,
        BLACK_GLASSES
    };



    enum Ability{
        NULL_ABILITY,
        INTIMIDATE,
        DAMP,
        STATIC,
        FLASH_FIRE
    };

    const static std::string AbilityStrings[5] = {
        "NULL",
        "Intimidate",
        "Damp",
        "Static",
        "Flash Fire",
    };

}


#endif // ENUMS_H_INCLUDED
