#include <iostream>
using namespace std;

inline bool is_Even(int num) 
    { 
        return num % 2 == 0; 
    }

int main() {
    int n;
    cin >> n;
    cout << is_Even(n);
    return 0;
}
