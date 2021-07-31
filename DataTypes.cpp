#include <iostream>

using namespace std;

int main() {
    string thisText = "\"Her grade in 10th grade English this quarter is ";
    string bspc = "\n\n";
    string alternative = "However, it does not matter to her, as it is the joy and pleasure of learning that is important for her.";
    char grade = 'A';
    int GWA = 1;
    double score = 100.5;
    bool isPassed = false;
    
    if (isPassed == true) {
        cout << bspc << thisText << grade << ". Furthermore, she got a perfect " << GWA << " general weighted average,\nfrom scoring an excessive " << score << " in the mentioned subject from the quarterly exam.\"" << bspc << endl;
    }
    else {
        cout << bspc << alternative << bspc << endl;
    }
}