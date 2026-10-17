#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
        cout << "operator: " << ch << "\n";
    } else {
        cout << "Not an operator\n";
    }

    return 0;
}
