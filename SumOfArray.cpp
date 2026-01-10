#include <iostream>
using namespace std;

int sum_array_recursive(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sum_array_recursive(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << sum_array_recursive(arr, n);
    return 0;
}
