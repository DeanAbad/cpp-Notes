#include <iostream>

using namespace std;

void notes();

int main() {
    notes();

    string name = "Dean Harold P. Abad";
    int age = 19;
    string sex = "Male";
    string likes[3][3] = {
        {"art", "coding", "animation"},
        {"anime", "manga", "cartoons"},
        {"chocolate", "milk", "juice"}
    };

    // Variables are storage for values.

    // The memory or RAM is used for running a program,
    // and storing and keeping track of information.

    // Therefore, values in variables are physically stored
    // in the computer

    // Each stored values, in a container (variable), have its
    // own physical memory address, which uniquely identifies itself.

    // When the program want to access a value, that value
    // is accessed via its memory address.

    // Its memory address can be accessed by adding an ampersand (&)
    // to the variable:
    cout << "The 'name' variable is stored at " << &name << " memory address.";
    
    // The memory addresses are called as 'pointers'.

    return 0;
}

void notes() {
    string thisText = "\n\tint main() {\n\t\tstring name = \"Dean Harold P. Abad\";\n\t\tint age = 19;\n\t\tstring sex = \"Male\";'\n\t\tstring likes[3][3] = {\n\t\t\t{\"art\", \"coding\", \"animation\"},\n\t\t\t{\"anime\", \"manga\", \"cartoons\"},\n\t\t\t{\"chocolate\", \"milk\", \"juice\"}\n\t\t};\n\n\t\t// Variables are storage for values.\n\n\t\t// The memory or RAM is used for running a program,\n\t\t// and storing and keeping track of information.\n\n\t\t// Therefore, values in variables are physically stored\n\t\t// in the computer\n\n\t\t// Each stored values, in a container (variable), have its\n\t\t// own physical memory address, which uniquely identifies itself.\n\n\t\t// When the program want to access a value, that value\n\t\t// is accessed via its memory address.\n\n\t\t// Its memory address can be accessed by adding an ampersand (&)\n\t\t// to the variable:\n\t\tcout << \"The 'name' variable is stored at \" << &name << \" memory address.\";\n\n\t\t// The memory addresses are called as 'pointers'.\n\n\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
}