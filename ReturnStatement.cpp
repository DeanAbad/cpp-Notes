#include <iostream>

using namespace std;

/*
    Not only that functions can be given with parameters,
    but they can also return certain values.
*/
double cubeThis(double thisNumber) {
    double thisCubedResult = thisNumber * thisNumber * thisNumber;
    return thisCubedResult;
    // Everything that comes after the return statement are ignored.
    cout << "Hello, don't ignore me!";
    // This is due to that with return, the function is finally done or reached an end.
}

int main() {
    string thisText = "\nAs functions can be specified with any type and number of parameters, they can also be assigned a data type to return\nfor being assigned with a data type in the first place (aside from void type).";
    cout << thisText << endl;
    thisText = "\n\tdouble cubeThis(double thisNumber) {\n\t\tdouble thisCubedResult = thisNumber * thisNumber * thisNumber;\n\t\treturn thisCubedResult;\n\t\t// Everything that comes after the return statement are ignored.\n\t\tcout << \"Hello, don't ignore me!\";\n\t\t// This is due to that with return, the function is finally done or reached an end.\n\t}\n\n\tint main() {\n\t\tdouble aNumber = 10;\n\t\t// Using the function with return to a variable:\n\n\t\tdouble cubeANumber = cubeThis(aNumber);\n\t}\n\nOutput: ";

    double aNumber = 10;
    // Using the function with return to a variable.
    double cubeANumber = cubeThis(aNumber);
    cout << thisText << cubeANumber << "\n\n";

    return 0;
}