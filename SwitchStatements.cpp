#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) {
    string dayName;
    /*
        A switch statement allows much cleaner and compact code;
        switch accepts a variable for its basis in comparison of cases.
    */
    switch(dayNum) {    // Here, the number inputted into the dayNum will be compared to different cases.
        case 1:
            dayName = "Sunday";
            break;
        case 2:
            dayName = "Monday";
            break;
        case 3:
            dayName = "Tuesday";
            break;
        case 4:
            dayName = "Wednesday";
            break;
        case 5:
            dayName = "Thursday";
            break;
        case 6:
            dayName = "Friday";
            break;
        case 7:
            dayName = "Saturday";
            break;
        default:        // The default allows special case when other provided cases are not met.
            dayName = "Invalid day number. Check the number and try again.";
    }

    return dayName;
}

int main() {
    string thisText = "\n\tstring getDayOfWeek(int dayNum) {\n\t\tstring dayName;\n/*\n\t\t\tA switch statement allows much cleaner and compact code;\n\t\t\tswitch accepts a variable for its basis in comparison of cases.\n\t\tswitch(dayNum) {    // Here, the number inputted into the dayNum will be compared to different cases.\n\t\t\tcase 1:\n\t\t\t\tdayName = \"Sunday\";\n\t\t\t\tbreak;\n\t\t\tcase 2:\n\t\t\t\tdayName = \"Monday\";\n\t\t\t\tbreak;\n\t\t\tcase 3:\n\t\t\t\tdayName = \"Tuesday\";\n\t\t\t\tbreak;\n\t\t\tcase 4:\n\t\t\t\tdayName = \"Wednesday\";\n\t\t\t\tbreak;\n\t\t\tcase 5:\n\t\t\t\tdayName = \"Thursday\";\n\t\t\t\tbreak;\n\t\t\tcase 6:\n\t\t\t\tdayName = \"Friday\";\n\t\t\tbreak;\n\t\t\tcase 7:\n\t\t\t\tdayName = \"Saturday\";\n\t\t\tbreak;\n\t\t\tdefault:        // The default allows special case when other provided cases are not met.\n\t\t\t\tdayName = \"Invalid day number. Check the number and try again.\";\n\n\t\treturn dayName;\n\t}\n\n\tint main() {\n\n\t\tcout << getDayOfWeek(4);\n\n\t\treturn 0;\n\t}\n\nOutput: ";
    
    cout << thisText << getDayOfWeek(4);

    return 0;
}