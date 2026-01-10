#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1,num2;
    cout << "Enter Two numbers :";
    cin >> num1 >> num2 ;
    lcm(num1, num2);
    return 0;
}
