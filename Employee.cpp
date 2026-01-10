#include <iostream>
#include <string>
using namespace std;

class Employee {
    int emp_id;
    string emp_name;
    float emp_sal;
    mutable float bonus;

public:
    Employee(int id, string name, float sal) {
        emp_id = id;
        emp_name = name;
        emp_sal = sal;
        bonus = 0;
    }

    void displayOutput() const {
        cout << emp_id << " " << emp_name << " " << emp_sal << endl;
    }

    void updateSalary(float s) {
        emp_sal = s;
    }

    float getBonus() const {
        bonus = emp_sal * 0.10;
        return bonus;
    }
};

int main() {
    const Employee e1(137, "Shivam", 100000);
    e1.displayOutput();
    cout << e1.getBonus();
    return 0;
}
