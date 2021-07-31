#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Types of numbers
    int wholeNumber;
    float floatingPoint32;
    double floatingPoint64;
    wholeNumber = 317;
    // Single precision, 32-bit floating-point data type
    floatingPoint32 = 412.1325464863; // 412.133
    // Double precision, 64-bit floating-point data type
    floatingPoint64 = 15.6425;        // 15.6425

    string thisText = "\nThe operation involved below is ";
    string otherText = ", and therefore gives a ";
    string thisOperationType;
    int a, b;

    // Types of operations
    thisOperationType = "addition";
    a = wholeNumber;
    b = 3;
    cout << thisText << thisOperationType << otherText << "sum." << endl;
    cout << "317 + 3 = " << a + b << endl;

    thisOperationType = "subtraction";
    a = floatingPoint32;
    b = floatingPoint64;
    cout << thisText << thisOperationType << otherText << "difference." << endl;
    cout << "412.133 - 15.6425 = " << a - b << endl;

    thisOperationType = "multiplication";
    a = wholeNumber;
    b = 2;
    cout << thisText << thisOperationType << otherText << "product." << endl;
    cout << "317 * 2 = " << a * b << endl;

    thisOperationType = "division";
    a = floatingPoint64;
    b = 3;
    cout << thisText << thisOperationType << otherText << "quotient." << endl;
    cout << "15.6425 / 3 = " << a / b << endl;

    thisOperationType = "modulus"; // Returns remainder only
    a = 11;
    b = 4;
    cout << thisText << thisOperationType << otherText << "remainder." << endl;
    cout << "11 % 4 = " << a % b << endl;

    // C++ follows PEMDAS/BODMAS
    thisText = "\nThe C++ programming language follows PEMDAS/BODMAS:";
    int val1 = 61;
    float val2 = 12.35;
    double val3 =  78.21;
    a = wholeNumber;
    b = 32;
    cout << thisText << "\n(317 - (61 * 78.21) / 32) + 12.35 = " << (a - (val1 * val3) / b) + val2;

    // Incrementing
    thisText = "\n\nA variable with a value of 54, would be printed out as 55 with the use of an increment i.e. it increases with 1:\n\tint wholeNumber = 54;\n\twholeNumber++;\nOutput: ";
    wholeNumber = 54;
    wholeNumber++;
    cout << thisText << wholeNumber;

    // Decrementing
    thisText = "\n\nA variable with a value of 54, would be printed out as 53 with the use of an increment i.e. it decreases with 1:\n\tint wholeNumber = 54;\n\twholeNumber--;\nOutput: ";
    wholeNumber = 54;
    wholeNumber--;
    cout << thisText << wholeNumber;

    // Inline operation
    thisText = "\n\nA variable with an inline operation would evaluate a new value:\n\tint wholeNumber = 10;\n\tdouble floatingPoint64 = 19.2451;\n\twholeNumber += floatingPoint64;\nOutput: ";
    wholeNumber = 10;
    floatingPoint64 = 19.2451;
    wholeNumber += floatingPoint64;
    cout << thisText << wholeNumber;

    // Operating different types of numbers
    thisText = "\n\nOperating different types of numbers, i.e. a whole number to another but with fractional part would result into a number with decimals:\n\tint wholeNumber = 5;\n\tdouble floatingPoint64 = 12.7413;\n\twholeNumber + floatingPoint64;\nOutput: ";
    wholeNumber = 5;
    floatingPoint64 = 12.7413;
    cout << thisText << wholeNumber + floatingPoint64;

    thisText = "\n\nOn the other hand, dividing the same integer type of variables with a resulting fractional number, would only end up with the whole number part\nas the only types that were involved were integers.\n\tint wholeNumber = 14;\n\tint a = 3;\n\twholeNumber / a;\nOutput: ";
    wholeNumber = 14;
    a = 3;
    cout << thisText << wholeNumber / a;

    // #include <cmath> enables more math functions
    thisText = "\n\nAfter including a math header file i.e. cmath, more math functions can be called and used.\nThis time the pow() function is used, and it does an exponent operation by passing 2 arguments, which are the base and exponent:\n\tint a = 10;\n\tint b = 2;\n\tpow(a, b);\nOutput: ";
    a = 10;
    b = 2;
    cout << thisText << pow(a, b);

    thisText = "\n\nThis time the math function used is the sqrt() function, and it does square root operation:\n\tint a = 100;\n\tsqrt(a);\nOutput: ";
    a = 100;
    cout << thisText << sqrt(a);

    thisText = "\n\nThe round() function follows the normal rule of rounding numbers.\n\tdouble floatingPoint64 = 4.5;\n\tround(floatingPoint64);\nOutput: ";
    floatingPoint64 = 4.5;
    cout << thisText << round(floatingPoint64);

    thisText = "\n\nThe ceil() function, which stands for 'ceiling', always rounds up to the next highest number.\n\tdouble floatingPoint64 = 15.1\n\tceil(floatingPoint64);\nOutput: ";
    floatingPoint64 = 15.1;
    cout << thisText << ceil(floatingPoint64);
    
    floatingPoint64 = 15.7;
    thisText = "\n\nOn the other hand, the floor() does the opposite; it always rounds down to the next lowest number.\n\tdouble floatingPoint64 = 15.7\n\tfloor(floatingPoint64);\nOutput: ";
    cout << thisText << floor(floatingPoint64);

    thisText = "\n\nThe fmax() function finds the biggest number from the passed parameters.\n\tint a = 32;\n\tint b = 6;\n\tfmax(a, b);\nOutput: ";
    a = 32;
    b = 6;
    cout << thisText << fmax(a, b);
    
    thisText = "\n\nThe fmin() function does the opposite of fmax(); it finds the smallest number among the arguments.\n\tint a = 32;\n\tint b = 6;\n\tfmin(a, b);\nOutput: ";
    cout << thisText << fmin(a, b);

    return 0;
}