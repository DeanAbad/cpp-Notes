#include <iostream>

using namespace std;

int main() {
    // Declare variables
    string characterRace;
    string characterName;
    int characterAge;
    string characterSex;
    string characterPronoun;
    // Assign values
    characterRace = "Dryad";
    characterName = "Yilfir";
    characterAge = 250;
    characterPronoun = "she";

    cout << "\n\n" << endl;
    cout << "\"This is a story of " << characterName << ", a " << characterRace << " who lived for about " << characterAge << " years, and witnessed the gradual decline of the forests." << endl;
    cout << "Since the Great Calamity, " << characterPronoun << " is the only one who still protect and nuture the remaining trees in their world.\"" << endl;
    cout << "\n\n" << endl;

    return 0;
}