#include <iostream>
using namespace std;

int main()
{
    /*
        AND (&&) OPERATOR

        • AND gives true only when both conditions are true.
        • If any one condition is false, the result is false.
    */

    int A = 10;
    int B = 20;

    cout << (A < B && B > 15) << endl;

    // cout << (true && true) → Output: true (1)


    /*
        OR (||) OPERATOR

        • OR gives true when at least one condition is true.
        • It gives false only when both conditions are false.
    */

    cout << (A > B || B > 15) << endl;

    // cout << (false || true) → Output: true (1)

    return 0;
}