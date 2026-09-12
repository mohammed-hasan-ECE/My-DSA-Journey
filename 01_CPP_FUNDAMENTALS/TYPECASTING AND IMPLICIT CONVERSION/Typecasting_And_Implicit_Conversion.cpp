#include <iostream>
using namespace std;

int main()
{
    /*
        IMPLICIT CONVERSION

        • It commonly happens when converting a smaller data type to a
          larger data type.
        • Example: char → int
        • The character is automatically converted to its character code.
    */

    char A = 'A';
    int B = A;

    cout << B << endl;

    // OUTPUT: 65


    /*
        TYPECASTING (EXPLICIT CONVERSION)

        • It is called explicit or forced conversion.
        • It is commonly used when converting a larger data type to a
          smaller data type.
        • Example: float → int
        • The decimal part is removed during the conversion.
    */

    float C = 5.5;
    int D = (int)C;

    cout << D << endl;

    // OUTPUT: 5

    return 0;
}