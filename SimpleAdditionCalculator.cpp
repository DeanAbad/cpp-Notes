#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    cout << "\nThis is a simple calculator which only adds to number inputs.\n\n";
    cout << "\tEnter the first number: ";
    cin >> num1;
    cout << "\tEnter the second number: ";
    cin >> num2;
    cout << "\tOutput: " << num1 << " + " << num2 << " = " << num1 + num2 << "\n\n";

    return 0;
}