#include <iostream>

using namespace std;

// Making a function requires a return type for the caller.
// The void type does not return any data type.
void greeting() {
    string thisMessage = "Hello user!";
    cout << thisMessage << endl;
}

void specificGreeting(string name) {
    cout << "Hello " << name << "!" << endl;
}

void anotherGreeting(string name, int age) {
    cout << "Hello! My name is " << name << ", and I am " << age << " years old." << endl;
}

// A function stub; is called right away and just being defined later.
void aFXAfterMainFX();

int main() {
    string thisText = "\nMaking a function in C++ requires a return type for the caller.\nThe void type does not return any data type.\n\n\tvoid greetings() {\n\t\tstring thisMessage = \"Hello user!\";\n\t\tcout << thisMessage << endl;\n\t}\n\n\tint main() {\n\t\tgreeting();\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;

    // Call the function:
    greeting();

    thisText = "\nThe int main() function is always called, therefore, putting other functions inside the main() function will include them when running.";
    cout << thisText << endl;

    thisText = "\nAnother thing about functions is that they can be specified with parameters/arguments for other range of uses.";
    cout << thisText << endl;

    thisText = "The 'void specificGreeting(string name)' function has a string parameter, 'name', and expects a string when being called.\n\n\tvoid specificGreeting(string name) {\n\t\tcout << \"Hello \" << name << \"!\" << endl;\n\t}\n\n\tint main() {\n\t\tstring thisName = \"Sylphy Eyeheir\"\n\n\t\tspecificGreeting(thisName);\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
    string thisName = "Jolli McDonald";

    specificGreeting(thisName);

    thisText = "\nA function can have as many parameters as it needs.\n\n\tvoid anotherGreeting(string name, int age) {\n\t\tcout << \"Hello! My name is \" << name << \", and I am \" << age << \" years old.\" << endl;\n\t}\n\n\tint main() {\n\t\tstring thisName = \"Santa Klaus\";\n\t\tint thisAge = 30;\n\n\t\tanotherGreeting(thisName, thisAge);\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    thisName = "Santa Klaus";
    int thisAge = 30;

    cout << thisText;
    anotherGreeting(thisName, thisAge);

    aFXAfterMainFX();

    return 0;
}

void aFXAfterMainFX() {
    cout << "\nThis is a function that comes after the main() function; it would not be recognized and called unless a function stub is being used before the main() function:\n\n\tvoid aFXAfterMainFX();\n\n\tint main() {\n\t\taFXAfterMainFX();\n\n\t\treturn 0;\n\t}\n\n\tvoid aFXAfterMainFX() {\n\n\t\t...\n\t}\n\nOutput: The aFXAfterMainFX() function was called and ran properly.\n" << endl;
}