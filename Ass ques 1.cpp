#include <iostream>
#include <string>
using namespace std;

string rotateString(string string) {
    return string.substr(1) + string[0];
}

int main() {
    string string1, string2;
    cout << "Enter first string: ";
    cin >> string1;
    cout << "Enter second string: ";
    cin >> string2;

    if (string1 == string2) {
        cout << "Strings are equal." << endl;
        string1 = rotateString(string1);
        string2 = rotateString(string2);
        cout << "Rotated strings: " << string1 << " and " << string2 << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    return 0;
}