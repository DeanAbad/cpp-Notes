#include <iostream>
#include <string>

using namespace std;

int main() {
    string anyText;
    //double anyNumber;

    //cout << "\nEntering any number below will be stored in a double variable, which will be printed later on.\n\n\tAny number: ";
    //cin >> anyNumber;
    //cout << "\tYou have entered '" << anyNumber << "'." << endl;

    cout << "\nCompared to the 'cin' whenever it is used to get number inputs, when it comes to getting a line of strings,\nthe getline() function is used instead.\n\n\tAny text: ";
    // In order to be called and work, the <string> header is included.
    getline(cin, anyText);
    cout << "\tYou have entered '" << anyText << "'." << endl;

    return 0;
}