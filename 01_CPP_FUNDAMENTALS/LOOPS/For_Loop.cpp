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

    FOOTNOTE: INITIALIZATION VS CONDITION

    Do not confuse the initialization with the loop condition.

    1. INITIALIZATION → STARTING POINT

       Example:
       for (int i = 1; i <= 5; i++)

       Here, "i = 1" is the initialization.
       It sets the starting point of the loop.

       Initialization happens when the loop starts.
       In a nested for loop, the inner loop's initialization happens
       again each time the outer loop moves to a new iteration.

    2. CONDITION → GATE

       Example:
       for (int i = 1; i <= 5; i++)

       Here, "i <= 5" is the condition.
       It acts like a gate.

       Before every iteration:
       - If the condition is true → the statement is executed.
       - Then the increment happens.
       - The condition is checked again.
       - If the condition becomes false → the loop ends.

       Comparison operators such as <, <=, > and >= are commonly
       used in the condition.

    PATTERNS / NESTED FOR LOOPS:

       In pattern problems, think of:
       - Outer loop → number of rows
       - Inner loop → number of values/items in each row

       Example:

       for (int i = 1; i <= 4; i++)
       {
           for (int j = 1; j <= i; j++)
           {
               cout << j;
           }
           cout << endl;
       }

       Here:
       - "i" represents the current row.
       - "j" represents the values/items printed in that row.
       - "j = 1" makes the inner loop start from 1 every time a new row begins.

       Therefore, the output becomes:

       1
       12
       123
       1234

       This is especially useful when solving nested-loop pattern problems.

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