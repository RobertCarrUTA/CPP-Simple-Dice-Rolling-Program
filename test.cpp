#include "die.h"

using namespace std;

int main ()
{
    // Parameters: Highest number on die, 0 (allows for random value generation within restraints), number of rolls
    Die d4{4, 0, 20};
    Die d6{6, 0, 20};
    Die d8{8, 0, 20};
    Die d12{12, 0, 20};
    Die d20{20, 0, 20};
}
