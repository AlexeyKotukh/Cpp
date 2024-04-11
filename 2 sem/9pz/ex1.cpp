#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    getline(cin, password);

    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    if (password.length() < 8) {
        cout << "The password must be 8 characters long" << endl;
        return 0;
    }

    for (char c : password) {
        if (isupper(c)) {
            hasUpperCase = true;
        }
        else if (islower(c)) {
            hasLowerCase = true;
        }
        else if (isdigit(c)) {
            hasDigit = true;
        }
        else if (ispunct(c)) {
            hasSpecialChar = true;
        }
    }

    if (!hasUpperCase) {
        cout << "The password must have at least one upper case letter" << endl;
    }
    if (!hasLowerCase) {
        cout << "The password must have at least one lower case letter" << endl;
    }
    if (!hasDigit) {
        cout << "The password must have at least one digit" << endl;
    }
    if (!hasSpecialChar) {
        cout << "The password must have at least one special character" << endl;
    }

    if (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar) {
        cout << "The password is valid" << endl;
    }

    return 0;
}
