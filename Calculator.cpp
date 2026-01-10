#include <iostream>
using namespace std;

int main() {
    int choice;
    double x, y;

    do {
        cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
            break;

        cout << "Enter two numbers: ";
        cin >> x >> y;

        try {
            switch (choice) {
                case 1:
                    if (x < 0 || y < 0)
                        throw string("Addition numbers must not be negative");
                    cout << "Result is: " << x + y;
                    break;

                case 2:
                    if (x - y < 0)
                        throw string("Subtraction result must not be negative");
                    cout << "Result is: " << x - y;
                    break;

                case 3:
                    if (x < 0 || y < 0)
                        throw string("Multiplication numbers must not be negative");
                    cout << "Result is: " << x * y;
                    break;

                case 4:
                    if (y == 0)
                        throw string("Division by zero not allowed");
                    cout << "Result is: " << x / y;
                    break;

                default:
                    throw string("Invalid choice");
            }
        }
        catch (string e) {
            cout << e;
        }

    } while (choice != 0);

    return 0;
}
