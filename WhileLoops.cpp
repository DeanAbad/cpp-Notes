#include <iostream>

using namespace std;

void whileLoop(), doWhileLoop();

int main() {
    string thisText = "\n\tvoid whileLoop() {\n\t\tint index = 1;\n\t\tstring ordinal;\n\n\t\twhile(index <= 5) {\t// This will execute as long as the index is less or equal to 5;\n\t\t\t\t\t// the conditions are checked first before executing the code.\n\t\t\tswitch(index) {\n\t\t\t\tcase 1:\n\t\t\t\t\tordinal = \"st\";\n\t\t\t\t\tbreak;\n\t\t\t\tcase 2:\n\t\t\t\t\tordinal = \"nd\";\n\t\t\t\t\tbreak;\n\t\t\t\tcase 3:\n\t\t\t\t\tordinal = \"rd\";\n\t\t\t\t\tbreak;\n\t\t\t\tdefault:\n\t\t\t\t\tordinal = \"th\";\n\t\t\t\t\tbreak;\n\t\t\t}\n\n\t\t\tcout << index << ordinal << \": This is executed multiple times with a while loop.\" << endl;\n\t\t\tindex++;\t// Per loop, the index is incremented, until the 5th.\n\t\t}\n\t}\n\n\tint main() {\n\t\twhileLoop();\n\t}\n\nOutput:\n";
    
    cout << thisText;
    whileLoop();

    thisText = "\n\tvoid doWhileLoop() {\n\t\tint index = 1;\n\t\tstring ordinal;\n\n\t\tdo {\t// A do-while loop is a while loop but reversed;\n\t\t\t// this loop executes first the code, then checks the conditions.\n\t\t\tswitch(index) {\n\t\t\tcase 1:\n\t\t\t\tordinal = \"st\";\n\t\t\t\tbreak;\n\t\t\tcase 2:\n\t\t\t\tordinal = \"nd\";\n\t\t\t\tbreak;\n\t\t\tcase 3:\n\t\t\t\tordinal = \"rd\";\n\t\t\t\tbreak;\n\t\t\t\tdefault:\n\t\t\t\tordinal = \"th\";\n\t\t\t\tbreak;\n\t\t\t}\n\n\t\t\tcout << index << ordinal << \": This is executed multiple times with a while loop.\" << endl;\n\t\t\tindex++;\n\t\t} while(index <= 5);\n\n\t/*\n\t\tThe do-while loop is useful for certain conditions like having a value out of bounds from the condition,\n\t*/\t\n\t}\n\n\tint main() {\n\t\tdoWhileLoop();\n\t}\n\nOutput:\n";
    cout << thisText;
    doWhileLoop();

    return 0;
}

void whileLoop() {
    int index = 1;
    string ordinal;

    while(index <= 5) { // This will execute as long as the index is less or equal to 5; the conditions are checked first before executing the code.
        switch(index) {
            case 1:
                ordinal = "st";
                break;
            case 2:
                ordinal = "nd";
                break;
            case 3:
                ordinal = "rd";
            default:
                ordinal = "th";
        }
        
        cout << index << ordinal << ": This is executed multiple times with a while loop." << endl;
        index++;        // Per loop, the index is incremented, until the 5th.
    }
}

void doWhileLoop() {
    int index = 1;
    string ordinal;

    do { // A do-while loop is a while loop but reversed; this loop executes first the code, then checks the conditions.
        switch(index) {
            case 1:
                ordinal = "st";
                break;
            case 2:
                ordinal = "nd";
                break;
            case 3:
                ordinal = "rd";
            default:
                ordinal = "th";
        }
        
        cout << index << ordinal << ": This is executed multiple times with a while loop." << endl;
        index++;
    } while(index <= 5);

    /*
        The do-while loop is useful for certain conditions like having a value out of bounds from the condition,
        but it will be executed anyway as the code is executed first, before the conditions are checked.
    */
}