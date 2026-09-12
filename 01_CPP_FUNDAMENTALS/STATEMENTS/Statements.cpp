#include <iostream>
using namespace std;

int main()
{
    /*
        IF STATEMENT

        • The code inside if runs only when the condition is true.
        • If the condition is false, the code inside if is skipped.
    */

    int A = 10;

    if (A > 5)
    {
        cout << "A";
    }

    // OUTPUT: A


    /*
        MULTIPLE IF STATEMENTS

        • Each if statement is checked separately.
        • If multiple if conditions are true, all their code will execute.
        • Therefore, multiple outputs can be produced.
    */

    int B = 10;

    if (B > 5)
    {
        cout << "A";
    }

    if (B > 8)
    {
        cout << "B";
    }

    if (B > 15)
    {
        cout << "C";
    }

    /*
        OUTPUT: AB

        • The first two conditions are true, so both blocks execute.
        • The third condition is false, so its block is skipped.
    */


    /*
        IF-ELSE STATEMENT

        • If the condition is true, the if block runs.
        • If the condition is false, the else block runs.
    */

    int C = 3;

    if (C > 5)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
    }

    // OUTPUT: B


    /*
        IF-ELSE IF-ELSE STATEMENT

        • Conditions are checked from top to bottom.
        • Once a condition is true, its code is executed.
        • After that, the whole if-else if-else chain stops.
        • The conditions below it are not checked, even if they are true.
        • If no condition is true, the else block is executed.
    */

    int D = 75;

    if (D >= 60)
    {
        cout << "A";
    }
    else if (D >= 70)
    {
        cout << "B";
    }
    else if (D >= 50)
    {
        cout << "C";
    }
    else
    {
        cout << "D";
    }

    /*
        OUTPUT: A

        • D >= 60 is true.
        • So "A" is printed and the whole chain stops.
        • Even though D >= 70 and D >= 50 are also true,
          their blocks are not executed.
    */

    return 0;
}