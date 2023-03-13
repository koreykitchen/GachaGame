#ifndef Gacha_Hpp

#define Gacha_Hpp

#include "Common.hpp"
#include "Character.hpp"

using namespace std;

class Gacha
{
    public: 
        Gacha(void);
        Character pull(void);
        ~Gacha(void);
};

#endif

