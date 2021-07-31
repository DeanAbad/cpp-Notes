#include <iostream>

using namespace std;

int main() {
    string thisText = "\n\n\"Hello World!\nThis is a simple C++ program written with VSC, which is integrated and run with Mingw compiler.\"\n\n";
    cout << thisText << endl;
    
    return 0;
}

/*
    VSC + Mingw-w64:
    After 'Run Build Task', the build will be available in the same folder,
    which will is executable via terminal by its relative path and name.
    For instance, while in Terminal, input '.\helloworld'.
*/