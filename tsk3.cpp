#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter comment line(s): ";
    getline(cin, str);

    if (str.length() >= 2 && str[0] == '/' && str[1] == '/') {
        cout << "Single-line comment\n";
    }
    else if (str.length() >= 4 && str.substr(0, 2) == "/*" && str.substr(str.length() - 2) == "*/") {
        cout << "Multiple-line comment\n";
    }
    else {
        cout << "Not a comment\n";
    }

    return 0;
}
