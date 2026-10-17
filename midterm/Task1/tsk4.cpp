#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter an identifier: ";
    cin >> str;

    if (str.empty()) {
        cout << "Not a valid Identifier\n";
        return 0;
    }

    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_')) {
        cout << "Not a valid Identifier\n";
        return 0;
    }

    bool isValid = true;
    for (int i = 1; i < str.length(); i++) {
        char c = str[i];
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')) {
            isValid = false;
            break;
        }
    }

    if (isValid) {
        cout << "Valid Identifier\n";
    } else {
        cout << "Not a valid Identifier\n";
    }

    return 0;
}
