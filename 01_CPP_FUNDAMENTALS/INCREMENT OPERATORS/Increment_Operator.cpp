/*
    INCREMENT OPERATOR (++)

    The increment operator is used to increase the value of a variable by 1.

    There are two types:

    1. Pre-increment (++A)
       - First increases the value of A by 1.
       - Then uses the new value.

    2. Post-increment (A++)
       - First uses the current value of A.
       - Then increases the value of A by 1.
*/

#include <iostream>
using namespace std;

int main()
{
    // CASE 1: PRE-INCREMENT (++A)

    int A = 11;
    int B = ++A;

    cout << "Pre-increment:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    /*
        OUTPUT:
        Pre-increment:
        A = 12
        B = 12
    */


    // CASE 2: POST-INCREMENT (A++)

    A = 11;
    B = A++;

    cout << "\nPost-increment:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    /*
        OUTPUT:
        Post-increment:
        A = 12
        B = 11
    */

    return 0;
}
    /*
        CONCLUSION:

        Once B is defined using either ++A or A++, the value of A
        itself has already been increased by 1.

        Therefore, if the original value of A was 11, then
        cout << A will give 12 in both cases.

        The difference between ++A and A++ is only in the value
        assigned to B:
        - ++A gives the increased value to B first.
        - A++ gives the original value to B first.

        But after the statement is executed, A will be increased
        in both cases.
    */
   /*
    ADDITIONAL NOTES:

    1. DECREMENT OPERATORS

    The same pre/post logic applies to decrement operators:

    --A  → Pre-decrement: decrease first, then use the new value.
    A--  → Post-decrement: use the current value, then decrease.


    2. INCREMENTING BY MORE THAN 1

    ++A and A++ can only increase A by 1.

    To increase by 2, 3, 4, etc., use +=:

    A += 2;  → increase A by 2
    A += 3;  → increase A by 3


    3. PRE/POST-STYLE INCREMENT BY MORE THAN 1

    There is no special pre/post operator for increasing by 2 or more.
    Instead, control the order of statements.

    Incorrect syntax:
    2 += A;   // ❌ Incorrect

    The variable must be on the left side of +=.


    POST-STYLE:
        B = A;
        A += 2;

        A = 10 → B = 10, A = 12


    PRE-STYLE:
        A += 2;
        B = A;

        A = 10 → A = 12, B = 12


    The same logic works with any value:

    4. DECREASING BY MORE THAN 1

    Use -= to decrease by 2, 3, 4, etc.:

    A -= 2;  → decrease A by 2
    A -= 3;  → decrease A by 3


    KEY POINT:

    ++A / A++  → increase by 1s
    --A / A--  → decrease by 1
    +=         → increase by any amount
    -=         → decrease by any amount

    For changes greater than 1, use += or -= and control the order
    of statements to achieve pre-style or post-style behavior.
*/