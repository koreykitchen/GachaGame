#include "Character.hpp"

Character::Character(void)
{
    //Need to first determine which rarity, then which class, then specific character

    int rarityChoice = rand() % 100;
    int nameChoice = rand() % 5;

    if(rarityChoice < RARE_CHANCE)
    {
        name = RARE_CHARACTER_NAMES[nameChoice];
    }

    else if(rarityChoice > (100 - 1 - LEGENDARY_CHANCE))
    {
        name = LEGENDARY_CHARACTER_NAMES[nameChoice];
    }

    else
    {
        name = COMMON_CHARACTER_NAMES[nameChoice];
    }
};

ostream& operator<<(ostream& os, const Character& dt)
{
    os << dt.name << endl;

    return os;
}

Character::~Character(void)
{
    //Generic Destructor
};