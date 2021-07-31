#include <iostream>

using namespace std;

void notes(), forLoop();

int main() {
    notes();
    forLoop();

    return 0;
}

void notes() {
    string thisText = "\n\tint main() {\n\t\t// For loop enables short code for iterations\n\t\t// Therefore, instead of writing this:\n\t\t/*\n\t\twhile(i <= 5) {\n\t\t\t...\n\t\t\ti++;\n\t\t}\n\t\t*where 'i' stands for 'index', we can just do this:\n\t\t*/\n\t\tfor(int i = 1; i <= 5; i++) {\n\t\t\tcout << \"This will be printed multiple times.\\n\";\n\t\t}\n\t\t/*\n\t\t\tThe starting number, the limit, and incrementing of it,\n\t\t\tare all written in just one line. In certain cases like this,\n\t\t\tthe for loop is used for convenience.\n\t\t*/\n\n\t\t// Another for loop but using it with an array:\n\t\tint nums[] = {5, 2, 3, 6, 1, 9};\n\t\tfor(int i = 0; i <= 6; i++) {\n\t\t\tcout << \"\\n\" << nums[i];\n\t\t/*\n\t\t\tSince an array always starts with a 0 index,\n\t\t\tthe initial number is 0, and the limit would\n\t\t\tbe 5 (as being counted from 0).\n\t\t*/\n\t\t}\n\t\treturn 0;\n\t}\n\nOutput:\n";
    cout << thisText;
}

void forLoop() {
    // For loop enables short code for iterations
    // Therefore, instead of writing this:
    /*
        while(i <= 5) {
            ...
            i++;
        }
        *where 'i' stands for 'index', we can just do this:
    */
    for(int i = 1; i <= 5; i++) {
        cout << "This will be printed multiple times.\n";
    }
    /*
        The starting number, the limit, and incrementing of it,
        are all written in just one line. In certain cases like this,
        the for loop is used for convenience.
    */

    // Another for loop but using it with an array:
    int nums[] = {5, 2, 3, 6, 1, 9};
    for(int i = 0; i <= 6; i++) {
        cout << "\n" << nums[i];
    }
    /*
        Since an array always starts with a 0 index,
        the initial number is 0, and the limit would
        be 5 (as being counted from 0).
    */
}