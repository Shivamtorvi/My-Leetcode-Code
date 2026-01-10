#include <iostream>
using namespace std;

bool is_palindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    cout << is_palindrome(s);
    return 0;
}
