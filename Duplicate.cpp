#include <iostream>
using namespace std;

int find_duplicates(int arr[], int n) {
    int c = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] == arr[i - 1])
            c++;
    return c;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << find_duplicates(arr, n);
    return 0;
}
