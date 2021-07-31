#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, year, noun, adjective;

    cout << "\nThis is a simple mad libs game.\n" << endl;
    cout << "\tEnter a name: ";
    getline(cin, name);
    cout << "\tEnter a year: ";
    getline(cin, year);
    cout << "\tEnter a single or a plural noun: ";
    getline(cin, noun);
    cout << "\tEnter an adjective: ";
    getline(cin, adjective);

    cout << "\n\tThe " << noun << " might be " << adjective << "," << endl;
    cout << "\tbut it's not as " << adjective << " as a family." << endl;
    cout << "                                - '" << name << " (" << year << ")'" << endl;

    return 0;
}