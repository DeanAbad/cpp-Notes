#include <iostream>

using namespace std;

void notes();

int main() {
    notes();

    int secretNum = 10;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool hasReachedLimit = false;
    string ordinal;

    cout << "\n\n >> GUESSING GAME <<\n\n";

    do {
        switch(guessCount+1) {
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
                break;
        }

        if(guessCount < guessLimit) {
            cout << "Enter your " << guessCount+1 << ordinal << " guess: ";
            cin >> guess;
            guessCount++;
        } else {
            hasReachedLimit = true;
        }
    } while(secretNum != guess && !hasReachedLimit);

    if(hasReachedLimit) {
        cout << "You lose!\n";
    } else {
        cout << "You win!\n";
    }

    return 0;
}

void notes() {
    string thisText = "\n\tint main() {\n\t\tint secretNum = 10;\n\t\tint guess;\n\t\tint guessCount = 0;\n\t\tint guessLimit = 5;\n\t\tbool hasReachedLimit = false;\n\t\tstring ordinal;\n\n\t\tcout << \">> GUESSING GAME <<\\n\\n\";\n\n\t\tdo {\n\t\t\tswitch(guessCount+1) {\n\t\t\t\tcase 1:\n\t\t\t\t\tordinal = \"st\";\n\t\t\t\t\tbreak;\n\t\t\t\tcase 2:\n\t\t\t\t\tordinal = \"nd\";\n\t\t\t\t\tbreak;\n\t\t\t\tcase 3:\n\t\t\t\t\tordinal = \"rd\";\n\t\t\t\t\tbreak;\n\t\t\t\tdefault:\n\t\t\t\t\tordinal = \"th\";\n\t\t\t\t\tbreak;\n\t\t\t\t}\n\t\t\tif(guessCount < guessLimit) {\n\t\t\t\tcout << \"Enter your guess: \";\n\t\t\t\tcin >> guess;\n\t\t\t\tguessCount++;\n\t\t\t} else {\n\t\t\t\thasReachedLimit = true;\n\t\t\t}\n\t\t} while(secretNum != guess && !hasReachedLimit);\n\n\t\tif(hasReachedLimit) {\n\t\t\tcout << \"You lose!\";\n\t\t} else {\n\t\t\tcout << \"You win!\";\n\t\t}\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
}