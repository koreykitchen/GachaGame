#include "Common.hpp"
#include "Gacha.hpp"
#include "Character.hpp"

using namespace std;

int main(void)
{
    Gacha g;

    srand(time(NULL));

    for(int i=0; i<100; i++)
    {
        cout << g.pull();
    }

    return 0;
}

