#include "iter.hpp"

int main()
{
    int integers[5] = {10, 20, 30, 40, 50};
    myIter(integers, 5, displayElement);

    char characters[6] = {'H', 'e', 'l', 'l', 'o', '!'};
    myIter(characters, 6, displayElement);

    return 0;
}
