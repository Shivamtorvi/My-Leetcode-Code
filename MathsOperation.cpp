#include <iostream>
using namespace std;

class Math {
public:
    int max(int a, int b) {
        if (a > b) return a;
        return b;
    }

    int max(int a, int b, int c) {
        return max(max(a, b), c);
    }

    int max(int a, int b, int c, int d) {
        return max(max(a, b), max(c, d));
    }
};

int main() {
    Math m;
    cout << m.max(5, 8) << endl;
    cout << m.max(3, 9, 5) << endl;
    cout << m.max(7, 2, 8, 5);
    return 0;
}
