#include <iostream>

using namespace std;

void ifElseStatements(), moreComparisons(); // One line of stub functions
int getMax(int num1, int num2);
int getMax3(int num1, int num2, int num3);

int main() {
    ifElseStatements();
    moreComparisons();

    return 0;
}

void ifElseStatements() {
    // An if-else statement 
    string thisText = "\nThis is a simple statement with if and else:\n\n\tint main() {\n\t\tstring thisText;\n\t\tbool isHuman = false;\n\n\t\tif(isHuman == true) {\n\t\t\tthisText = \"You are a human being, living among us.\";\n\t\t} else {\n\t\t\tthisText = \"You are no human being; blending among us.\";\n\t\t}\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
    // If statements can either be if-only, if-else, or with multiple conditions as arguments.
    bool isHuman = false;
    if(isHuman == true) {
        thisText = "You are a human being, living among us.";
    } else {
        thisText = "You are no human being; blending among us.";
    }
    cout << thisText << endl;

    // If-else with multiple arguments
    thisText = "\nThis if statement have 2 arguments that proceeds if both are true:\n\n\tint main() {\n\t\tstring thisText;\n\t\tbool isHuman = true;\n\t\tbool isFast = true;\n\n\t\tif(isHuman == true && isFast == true) {\n\t\t\tthisText = \"You're either athletic or just too energetic.\";\n\t\t} else {\n\t\t\tthisText = \"It's either you are a walking tempest, or a enthusiastic sloth.\";\n\t\t}\n\t\tcout << thisText;\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;

    isHuman = true;
    bool isFast = true;
    // AND operator
    if(isHuman == true && isFast == true) {
        thisText = "You're either athletic or just too energetic.";
    } else {
        thisText = "It's either you are a walking tempest, or a enthusiastic sloth.";
    }
    cout << thisText << endl;

    // OR operator
    thisText = "\nThis if statement have 2 arguments that proceeds if either one of them is true:\n\n\tint main() {\n\t\tstring thisText;\n\t\tbool isHuman = false;\n\t\tbool isFast = false;\n\n\t\tif(isHuman == true || isFast == true) {\n\t\t\tthisText = \"You're either athletic or just too energetic.\";\n\t\t} else {\n\t\t\tthisText = \"\";\n\t\t}\n\t\tcout << thisText;\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
    isHuman = false;
    isFast = false;
    if(isHuman == true || isFast == true) {
        thisText = "You're either athletic or just too energetic.";
    } else {
        thisText = "";
    }
    cout << thisText << endl;

    // else if statement
    thisText = "\nThis if-else statement contains else if statements:\n\n\tint main() {\n\t\tstring thisText;\n\t\tbool isMango;\n\t\tbool isSweet;\n\n\t\t// If it is a mango and has a sweet flavour:\n\t\tif(isMango == true && isSweet == true) {\n\t\t\tthisText = \"This fruit is a mango, and it is a pretty sweet one.\";\n\t\t} else if(isMango == true && isSweet == false) { // It is a mango, but it is not sweet at all.\n\t\t\tthisText = \"This fruit is definitely a mango, but it is the sour variant.\";\n\t\t} else if(isMango == false && isSweet == true) { // It is not a mango, but it's sweetness is definitely present.\n\t\t\tthisText = \"This fruit is not a mango at all, still, it's sweetness is really something.\";\n\t\t} else { // It is neither a mango nor a sweet fruit.\n\t\t\tthisText = \"This fruit is neither a mango nor sweet at all.\";\n\t\t}\n\t\tcout << thisText << endl;\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
    bool isMango;
    bool isSweet;
    // If it is a mango and has a sweet flavour:
    if(isMango == true && isSweet == true) {
        thisText = "This fruit is a mango, and it is a pretty sweet one.";
    } else if(isMango == true && isSweet == false) { // It is a mango, but it is not sweet at all.
        thisText = "This fruit is definitely a mango, but it is the sour variant.";
    } else if(isMango == false && isSweet == true) { // It is not a mango, but it's sweetness is definitely present.
        thisText = "This fruit is not a mango at all, still, it's sweetness is really something.";
    } else { // It is neither a mango nor a sweet fruit.
        thisText = "This fruit is neither a mango nor sweet at all.";
    }
    cout << thisText << endl;

    // negation operator
    thisText = "\nIn this same if-else statement from the previous one, the only difference is that instead of using false boolean,\nthe true boolean is negated with an exclamation mark, which serves as a 'negation operator'.\n\n\tint main() {\n\t\tstring thisText;\n\t\tbool isMango;\n\t\tbool isSweet;\n\n\t\t// If it is a mango and has a sweet flavour:\n\t\tif(isMango == true && isSweet == true) {\n\t\t\tthisText = \"This fruit is a mango, and it is a pretty sweet one.\";\n\t\t} else if(isMango == true && isSweet == !true) { // It is a mango, but it is not sweet at all.\n\t\t\tthisText = \"This fruit is definitely a mango, but it is the sour variant.\";\n\t\t} else if(isMango == !true && isSweet == true) { // It is not a mango, but it's sweetness is definitely present.\n\t\t\tthisText = \"This fruit is not a mango at all, still, it's sweetness is really something.\";\n\t\t} else { // It is neither a mango nor a sweet fruit.\n\t\t\tthisText = \"This fruit is neither a mango nor sweet at all.\";\n\t\t}\n\t\tcout << thisText << endl;\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    cout << thisText;
    if(isMango == true && isSweet == true) {
        thisText = "This fruit is a mango, and it is a pretty sweet one.";
    } else if(isMango == true && isSweet == !true) { // It is a mango, but it is not sweet at all.
        thisText = "This fruit is definitely a mango, but it is the sour variant.";
    } else if(isMango == !true && isSweet == true) { // It is not a mango, but it's sweetness is definitely present.
        thisText = "This fruit is not a mango at all, still, it's sweetness is really something.";
    } else { // It is neither a mango nor a sweet fruit.
        thisText = "This fruit is neither a mango nor sweet at all.";
    }
    cout << thisText << endl;
}

void moreComparisons() {
    string thisText = "\nIn this example, and another function, the numbers that were entered as arguments\nare compared with one another, and the bigger number is returned by the function.\n\n\tint getMax(int num1, int num2) {\n\t\tint result;\n\n\t\tif(num1 > num2) {\n\t\t\tresult = num1;\n\t\t} else {\n\t\t\tresult = num2;\n\t\t}\n\n\t\treturn result;\n\t}\n\n\tint main() {\n\t\tcout << getMax(5, -15) << endl;\n\t}\n\nOutput: ";
    cout << thisText << getMax(5, -15) << endl;

    thisText = "\nThis is another function which is based from the previous example, it has an additional argument to compare with.\n\n\tint getMax3(int num1, int num2, int num3){\n\t\tint result;\n\n\t\tif(num1 >= num2 && num1 >= num3) {\n\t\t\tresult = num1;\n\t\t} else if(num2 >= num1 && num2 >= num3) {\n\t\t\tresult = num2;\n\t\t} else if(num3 >= num1 && num3 >= num2) {\n\t\t\tresult = num3;\n\t\t}\n\n\t\treturn result;\n\t}\n\n\tint main() {\n\t\tcout << getMax3(-127, 41, 29) << endl;\n\t}\n\nOutput: ";
    cout << thisText << getMax3(-127, 41, 29) << endl;
}

int getMax(int num1, int num2) {
    int result;

    if(num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

int getMax3(int num1, int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if(num2 >= num1 && num2 >= num3) {
        result = num2;
    } else if(num3 >= num1 && num3 >= num2) {
        result = num3;
    }

    return result;
}