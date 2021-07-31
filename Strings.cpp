#include <iostream>

using namespace std;

int main() {
    string thisText = "This sentence's number of letters, spaces, and punctuations sum up to a total of ";
    // As it counts indices, it starts with 0.
    char thisTextLetter = thisText[6];

    cout << endl;
    cout << "\"This sentence has no line in the end. ";
    cout << "Therefore this one continues in this same line.";
    cout << "\nHowever, this one starts with a new line, and also has a line in the end." << endl;
    cout << "Which then makes this sentence print after the previous line. Also, in this sentence there are two end lines." << endl << endl;
    
    // Using length method to get the length of characters in a string.
    cout << ">>> " << thisText << thisText.length() << " characters.\n\n";
    
    cout << "This '" << thisTextLetter << "' letter comes from the previous sentence, specifically from the second letter\nof the second word of it i.e. the first 'sentence' word.\n\n";
    cout << "The sentence below is the same as the one with '>>>' mark from the start, but with changed 2 characters.\n\n";
    
    // Changing the value then accessing it.
    thisText[2] = 'e';
    thisText[3] = ' ';
    cout << thisText << thisText.length() << " characters.\n" << endl;

    thisText[2] = 'i';
    thisText[3] = 's';
    string wordToFind = "punctuations";
    // Using the find method to search for a string in a string; the find function expects parameters/arguments.
    // find( string: wordToFind, int: indexToStartFinding )
    cout << "Based from the sentence with '>>>', the word 'punctuation was found' at its index " << thisText.find(wordToFind, 0) << " with the use of the find() method.\n" << endl;
    char letterToFind = wordToFind[3];
    cout << "The same sentence, but the number " << thisText.find(letterToFind) << " that is totalled is based from finding the letter 's' in the sentence.\n" << endl;

    // Using the substring 'substr()' method to take a part of a string; the substr function expects 2 parameters: the initial index, and the number of indices.
    string thisAnotherText = "This is a text, which contains this word 'wonderful'.";
    int initialIndex, numberOfIndices;
    initialIndex = 42;
    numberOfIndices = 9;
    cout << "This word '" << thisAnotherText.substr(initialIndex, numberOfIndices) << "' was taken from another sentence with the use of substr() function.\n" << endl;

    // The substring be stored as a value in a string variable.
    string thisAnotherYetText = "This is another yet text, which has the word 'pond'.";
    string thisSubstring;
    initialIndex = 46;
    numberOfIndices = 4;
    thisSubstring = thisAnotherYetText.substr(initialIndex, numberOfIndices);
    cout << "This word '" << thisSubstring << "' was taken from another yet sentence which substring is stored in a variable as a value.\n" << endl;

    return 0;
}