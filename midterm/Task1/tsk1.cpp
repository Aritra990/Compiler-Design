#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter input: ";
    cin >> str;

    bool isNumeric = true;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric && !str.empty()) {
        cout << "numeric constant\n";
    } else {
        cout << "not numeric\n";
    }

    return 0;
}
