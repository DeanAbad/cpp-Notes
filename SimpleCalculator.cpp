#include <iostream>

using namespace std;

int main() {
    string thisText = "\nA simple but much better calculator than the last time, which enables the user to input any common operator\nfor operating numbers.\n\n\tint main() {\n\t\tint num1, num2, result\n\t\tchar op;\n\n\t\tcout << \"\\n\\tEnter the first number: \";\n\t\tcin >> num1;\n\t\tcout << \"\\tEnter the operator: \";\n\t\tcin >> op;\n\t\tcout << \"\\tEnter the second number: \";\n\t\tcin >> num2;\n\n\t\tif(op == '+') {\n\t\t\tresult = num1 + num2;\n\t\t} else if(op == '-') {\n\t\t\tresult = num1 - num2;\n\t\t} else if(op == '*') {\n\t\t\tresult = num1 * num2;\n\t\t} else if(op == '/') {\n\t\t\tresult = num1 / num2;\n\t\t} else {\n\t\t\tcout << \"Invalid operator! Check the operator and try again.\" << endl;\n\t\t}\n\n\t\tcout << num1 << \" \" << op << \" \" << num2 << \" = \" << result << endl;\n\n\t\treturn 0;\n\t}\n\nOutput: ";

    float num1, num2, result;
    char op;

    cout << "\n\tEnter the first number: ";
    cin >> num1;
    cout << "\tEnter the operator: ";
    cin >> op;
    cout << "\tEnter the second number: ";
    cin >> num2;

    if(op == '+') {
        result = num1 + num2;
    } else if(op == '-') {
        result = num1 - num2;
    } else if(op == '*') {
        result = num1 * num2;
    } else if(op == '/') {
        result = num1 / num2;
    } else {
        cout << "\n\nInvalid operator! Check the operator and try again." << endl;
    }

    cout << thisText << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}