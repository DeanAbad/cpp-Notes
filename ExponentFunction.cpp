#include <iostream>

using namespace std;

void notes();

float power(float base, int exp) {
    float result = 1;

    for(int i = 0; i < exp; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    notes();

    cout << power(2, 5);

    return 0;
}

void notes() {
    string thisText = "\nThis is a function made to use exponents to floats.\n\n\tfloat power(float base, int exp) {\n\t\tfloat result = 1;\n\n\t\tfor(int i = 0; i < exp; i++) {\n\t\t\tresult = result * base;\n\t\t}\n\n\t\treturn result;\n\t}\n\n\tint main() {\n\t\tcout << power(2, 5);\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
}