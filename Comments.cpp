#include <iostream>

using namespace std;

void notes();

int main() {
    notes();
    //  This is a single line comment.
    /*
        This is a multi-line comment,
        which allows multiple lines of
        comments.
    */

    return 0;
}
void notes() {
    string thisText = "\n\tint main() {\n\t\t//  This is a single line comment.\n\t\t/*\n\t\t    This is a multi-line comment,\n\t\t    which allows multiple lines of\n\t\t    comments.\n\t\t*/\n\n\t\treturn 0;\n\t}";
    cout << thisText;
}