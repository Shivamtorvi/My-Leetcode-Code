#include <iostream>
using namespace std;

bool validate_password(string pwd) {
    if (pwd.length() < 8)
        return false;

    bool digit = false, lower = false, upper = false, special = false;

    for (int i = 0; i < pwd.length(); i++) {
        if (pwd[i] >= '0' && pwd[i] <= '9')
            digit = true;
        else if (pwd[i] >= 'a' && pwd[i] <= 'z')
            lower = true;
        else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
            upper = true;
        else
            special = true;
    }

    return digit && lower && upper && special;
}

int main() {
    string pwd;
    cin >> pwd;

    if (validate_password(pwd))
        cout << "Valid Password";
    else
        cout << "Invalid Password";

    return 0;
}
