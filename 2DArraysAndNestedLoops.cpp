#include <iostream>

using namespace std;

void notes();

int main() {
    notes();
    // An array's number of elements should be specified first
    // before containing another array inside of it. Likewise,
    // it should be applied to the next array.
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // The 1st for loop will iterate the first array until its 3rd element.
    // The last for loop will iterate the element arrays until its 2nd element.
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid[i][j] << " ";
        }
    }

    return 0;
}

void notes() {
    string thisText = "\n\tint main() {\n\t\t// An array's number of elements should be specified first\n\t\t// before containing another array inside of it. Likewise,\n\t\t// it should be applied to the next array.\n\t\tint numberGrid[3][2] = {\n\t\t\t{1, 2},\n\t\t\t{3, 4},\n\t\t\t{5, 6}\n\t\t};\n\n\t\t// The 1st for loop will iterate the first array until its 3rd element.\n\t\t// The last for loop will iterate the element arrays until its 2nd element.\n\t\tfor(int i = 0; i < 3; i++) {\n\t\t\tfor(int j = 0; j < 2; j++) {\n\t\t\t\tcout << numberGrid[i][j] << \" \";\n\t\t\t}\n\t\t}\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
}