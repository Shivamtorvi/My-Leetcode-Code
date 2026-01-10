#include <iostream>
using namespace std;

class Array {
    double *arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new double[size];
    }

    void AcceptRecord() {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void PrintRecord() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    int LinearSearch(double key) {
        for (int i = 0; i < size; i++)
            if (arr[i] == key)
                return i;
        return -1;
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cin >> n;
    Array a(n);
    a.AcceptRecord();
    a.PrintRecord();
    double key;
    cin >> key;
    cout << a.LinearSearch(key);
    return 0;
}
