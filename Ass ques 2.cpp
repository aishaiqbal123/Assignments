#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(const string& str) {
    string result;
    for (char ch : str) {
        if (result.find(tolower(ch)) == string::npos) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string with uppercase and lowercase characters: ";
    getline(cin, input);

    string result = removeDuplicates(input);

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}