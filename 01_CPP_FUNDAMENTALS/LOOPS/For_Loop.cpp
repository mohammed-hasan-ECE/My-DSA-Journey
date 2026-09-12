/*
    FOR LOOP

    Structure:

    for (starting condition; finishing condition; increment)
    {
        // Execution command
    }

    1. Starting condition → where the loop starts.
    2. Starting condition + finishing condition → together define the range.
    3. Increment → changes the value after each execution.

    WORKING FLOW:

    Range condition checking → Execution → Increment → Range condition checking
            → Execution → Increment → ... → Condition not satisfied → Loop ends.

    Example:
*/

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    /*
        OUTPUT:
        1
        2
        3
        4
        5
    */

    return 0;
}