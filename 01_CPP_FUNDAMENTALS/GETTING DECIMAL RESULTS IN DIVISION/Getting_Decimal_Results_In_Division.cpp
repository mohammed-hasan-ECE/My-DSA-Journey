#include <iostream>
using namespace std;

int main()
{
    cout << (float)5 / 2;

    return 0;

    /*
        OUTPUT: 2.5

        • Numbers written directly are treated as integers.
        • Any operation (division, multiplication, etc.) on integers
          gives an integer result.
        • In division, this can remove the decimal part of the answer.
        • To get a decimal answer, we have to keep either one of the
          integers in float data type.
        • We can do this by writing (float) before the number.
    */
}