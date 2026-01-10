#include <iostream>
#include<cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int num;
    cout << "Enter single numbers : ";
    cin >> num;
    int res = is_prime(num);
    if (res)
    {
        cout << "value is Prime";
    }
    else{
        cout<<"Number is not prime";
    }
    

    return 0;
}
