#ifndef Character_Hpp

#define Character_Hpp

#include "Common.hpp"

using namespace std;

const string COMMON_CHARACTER_NAMES[] = {"A", "B", "C", "D", "E"};
const string RARE_CHARACTER_NAMES[] = {"AA", "BB", "CC", "DD", "EE"};
const string LEGENDARY_CHARACTER_NAMES[] = {"AAA", "BBB", "CCC", "DDD", "EEE"};

const int LEGENDARY_CHANCE = 1;
const int RARE_CHANCE = 10;
const int COMMON_CHANCE = 100 - LEGENDARY_CHANCE - RARE_CHANCE;

class Character
{
    public:
        string name;

        Character(void);
        friend ostream& operator<<(ostream& os, const Character& dt);
        ~Character(void);
};

#endif

