/*
    RANGE CHECKING

    Range checking is used to check whether a value lies within
    a specific range.

    Example:
    We want to check whether the character B lies between
    'A' and 'Z'.

    The condition is:

    B >= 'A' && B <= 'Z'

    This means:
    - B must be greater than or equal to 'A'
    - AND B must be less than or equal to 'Z'

    If both conditions are true, B lies within the range A to Z.
*/

#include <iostream>
using namespace std;

int main()
{
    char B = 'K';

    if (B >= 'A' && B <= 'Z')
    {
        cout << "WOWWWWWW";
    }

    /*
        OUTPUT:
        WOWWWWWW
    */

    return 0;
}