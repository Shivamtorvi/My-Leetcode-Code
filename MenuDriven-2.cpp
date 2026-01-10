#include <iostream>
#include <typeinfo>
using namespace std;

class Employee {
protected:
    int id;
    double salary;
public:
    Employee() { id = 0; salary = 0; }
    virtual void accept(){
        cout << "Enter Id : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> salary;
    }
    virtual void display() {
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
    virtual ~Employee() {}
};

class Manager : virtual public Employee {
protected:
    double bonus;
public:
    Manager() { bonus = 0; }
    void accept(){
        Employee::accept();
        cout << "Enter Bonus : ";
        cin >> bonus;
    }
    void display() {
        Employee::display();
        cout << "Bonus : " << bonus << endl;
    }
};

class Salesman : virtual public Employee {
protected:
    double commission;
public:
    Salesman() { commission = 0; }
    void accept(){
        Employee::accept();
        cout << "Enter Commission : ";
        cin >> commission;
    }
    void display() {
        Employee::display();
        cout << "Commission : " << commission << endl;
    }
};

class SalesManager : public Manager, public Salesman {
public:
     void accept(){
        Employee::accept();
        cout << "Enter Bonus : ";
        cin >> bonus;
        cout << "Enter Commission : ";
        cin >> commission;
    }
    void display() {
        Employee::display();
        cout << "Bonus : " << bonus << endl;
        cout << "Commission : " << commission << endl;
    }
};

int main() {
    const int size = 10;
    int mc = 0, sc = 0, smc = 0;

    Employee* arr[30];
    int count = 0;
    int choice;

    do {
        cout << "\n1.Add Manager";
        cout << "\n2.Add Salesman";
        cout << "\n3.Add SalesManager";
        cout << "\n4.Count";
        cout << "\n5.Display Managers";
        cout << "\n6.Display Salesmen";
        cout << "\n7.Display SalesManagers";
        cout << "\n0.Exit\n";
        cin >> choice;

        if (choice == 1) {
            arr[count] = new Manager();
            arr[count++]->accept();
        }
        else if (choice == 2) {
            arr[count] = new Salesman();
            arr[count++]->accept();
        }
        else if (choice == 3) {
            arr[count] = new SalesManager();
            arr[count++]->accept();
        }
        else if(choice == 4){
            for (int i = 0; i < count; i++){
                if (typeid(*arr[i]) == typeid(Manager))
                    mc++;
            cout << "Managers : " << mc << endl;
                if(typeid(*arr[i])== typeid(Salesman))
                    sc++;
            cout << "Salesman : " << sc << endl;
                if(typeid(*arr[i])== typeid(SalesManager))
                    smc++;
            }
            cout << "Managers : " << mc << endl;
            cout << "Salesman : " << sc << endl;
            cout << "SalesManagers : " << smc << endl;
        }
        else if (choice == 5) {
            for (int i = 0; i < count; i++)
                if (typeid(*arr[i]) == typeid(Manager))
                    arr[i]->display();
        }
        else if (choice == 6) {
            for (int i = 0; i < count; i++)
                if (typeid(*arr[i]) == typeid(Salesman))
                    arr[i]->display();
        }
        else if (choice == 7) {
            for (int i = 0; i < count; i++)
                if (typeid(*arr[i]) == typeid(SalesManager))
                    arr[i]->display();
        }

    } while (choice != 0);

    for (int i = 0; i < count; i++)
        delete arr[i];

    return 0;
}
