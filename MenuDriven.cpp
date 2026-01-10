#include<iostream>
using namespace std;

class Employee{
protected:
    int id;
    double salary;
public:
    Employee(){
        id = 0;
        salary = 0;
    }
    Employee(int i,double s){
        id = i;
        salary = s;
    }
    virtual void accept(){
        cout << "Enter Id : ";
        cin >> id;
        cout << "Enter Salary : ";
        cin >> salary;
    }
    virtual void display(){
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
    virtual ~Employee(){}
};

class Manager : virtual public Employee{
protected:
    double bonus;
public:
    Manager(){
        bonus = 0;
    }
    void accept(){
        Employee::accept();
        cout << "Enter Bonus : ";
        cin >> bonus;
    }
    void display(){
        Employee::display();
        cout << "Bonus : " << bonus << endl;
    }
};

class Salesman : virtual public Employee{
protected:
    double commission;
public:
    Salesman(){
        commission = 0;
    }
    void accept(){
        Employee::accept();
        cout << "Enter Commission : ";
        cin >> commission;
    }
    void display(){
        Employee::display();
        cout << "Commission : " << commission << endl;
    }
};

class SalesManager : public Manager, public Salesman{
public:
    void accept(){
        Employee::accept();
        cout << "Enter Bonus : ";
        cin >> bonus;
        cout << "Enter Commission : ";
        cin >> commission;
    }
    void display(){
        Employee::display();
        cout << "Bonus : " << bonus << endl;
        cout << "Commission : " << commission << endl;
    }
};

int main(){
    const int size = 10;

    Manager m[size];
    Salesman s[size];
    SalesManager sm[size];

    int mc = 0, sc = 0, smc = 0;
    int choice;

    do{
        cout << "\n1.Add Manager";
        cout << "\n2.Add Salesman";
        cout << "\n3.Add SalesManager";
        cout << "\n4.Count";
        cout << "\n5.Display Managers";
        cout << "\n6.Display Salesmen";
        cout << "\n7.Display SalesManagers";
        cout << "\n0.Exit\n";
        cin >> choice;

        if(choice == 1 && mc < size){
            m[mc].accept();
            mc++;
        }
        else if(choice == 2 && sc < size){
            s[sc].accept();
            sc++;
        }
        else if(choice == 3 && smc < size){
            sm[smc].accept();
            smc++;
        }
        else if(choice == 4){
            cout << "Managers : " << mc << endl;
            cout << "Salesman : " << sc << endl;
            cout << "SalesManagers : " << smc << endl;
        }
        else if(choice == 5){
            for(int i=0;i<mc;i++)
                m[i].display();
        }
        else if(choice == 6){
            for(int i=0;i<sc;i++)
                s[i].display();
        }
        else if(choice == 7){
            for(int i=0;i<smc;i++)
                sm[i].display();
        }

    }while(choice != 0);

}