#include <iostream>

using namespace std;

int main() {
    /*  An array in C++ is firstly specified of what type of data it will contain.
        The open and close square brackets come after the name of the array,
        then the list is contained between open and close curved brackets.
    */
    string thisText = "\nThe array in C++ is firstly specified of what type of data it will contain.\nThe open and close square brackets come after the name of the array,\nthen the list is contained between open and close curved brackets.";
    int luckyNumbers[] = {4, 5, 3, 12, 78, 10, 6, 31};
    cout << thisText << endl;

    thisText = "\nThe 3rd index in the array returns its contained value, 12:\n\tint luckyNumbers[] = {4, 5, 3, 12, 78, 10, 6, 31};\n\tluckyNumbers[3];\nOutput: ";
    cout << thisText << luckyNumbers[3] << endl;

    thisText = "\nAn element within an array can also be changed in when selecting an index and assigning a new value:\n\tluckyNumbers[3] = 36;\n\tluckyNumbers[3];\nOutput: ";
    luckyNumbers[3] = 36;
    cout << thisText << luckyNumbers[3] << endl;

    thisText = "\nFurthermore, the array can be specified on how much elements it can contain i.e. by specifying the number of needed items in the open and close square brackets.\n\tint newNumbers[20] = {99, 1, 23, 5};\n\tnewNumbers[17] = 540;\nOutput: ";
    int newNumbers[20] = {99, 1, 23, 5};
    newNumbers[17] = 540;
    cout << thisText << newNumbers[17] << endl;
    
    thisText = "\nLastly, arrays can be empty from the start, still, the number of items must be specified first:\n\tstring emptyArray[4];";
    cout << thisText << endl;
    
    return 0;
}