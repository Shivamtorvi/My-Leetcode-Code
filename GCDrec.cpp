#include <iostream>
using namespace std;

int gcd_recursive(int a, int b) {
    if (b == 0) return a;
    return gcd_recursive(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd_recursive(a, b);
    return 0;
}
