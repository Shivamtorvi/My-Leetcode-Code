#include <iostream>
#include <string>
using namespace std;

//Exception class on upside
class ServiceException {
    string msg;
public:
    ServiceException(string m) : msg(m) {}
    void display() {
        cout << msg << endl;
    }
};

//Base class 
class Service {
protected:
    int serviceId;
    string customerName;
public:
    Service() {
        serviceId = 0;
        customerName = "";
    }
    Service(int id, string name) {
        serviceId = id;
        customerName = name;
    }
    virtual void accept() {
        cout << "Enter Service ID: ";
        cin >> serviceId;
        cout << "Enter Customer Name: ";
        cin >> customerName;
    }
    virtual void display() {
        cout << "Service ID: " << serviceId << endl;
        cout << "Customer Name: " << customerName << endl;
    }
    virtual double calculateBill() = 0; //pure virtual fun
    virtual ~Service() {}
};

//deri class of Service base class
class InternetService : public Service {
    double dataUsed;
    double pricePerGB;
public:
    InternetService() : Service() {
        dataUsed = 0;
        pricePerGB = 0;
    }
    InternetService(int id, string name, double d, double p){
        dataUsed = d;
        pricePerGB = p;
    }
    void accept()  {
        Service::accept(); //go to base class accept fun
        cout << "Enter Data Used (GB): ";
        cin >> dataUsed;
        if (dataUsed < 0)
            throw ServiceException("Exception: Value cannot be negative!");
        cout << "Enter Price Per GB: ";
        cin >> pricePerGB;
        if (pricePerGB < 0)
            throw ServiceException("Exception: Rate cannot be negative!");
    }
    void display()  {
        Service::display();//go to base class display fun
        cout << "Data Used: " << dataUsed << " GB" << endl;
        cout << "Price Per GB: " << pricePerGB << endl;
        cout << "Bill Amount: " << calculateBill() << endl;
    }
    double calculateBill()  {
        return dataUsed * pricePerGB;//Bill calculation
    }
};


//deri class of Service base class
class CleaningService : public Service {
    double hours;
    double ratePerHour;
public:
    CleaningService() : Service() {
        hours = 0;
        ratePerHour = 0;
    }
    CleaningService(int id, string name, double h, double r){
        hours = h;
        ratePerHour = r;
    }
    void accept()  {
        Service::accept();//go to base class accept fun
        cout << "Enter Your Work Hours: ";
        cin >> hours;
        if (hours < 0)
            throw ServiceException("Exception: Value cannot be negative!");
        cout << "Enter Rate Per Hour: ";
        cin >> ratePerHour;
        if (ratePerHour < 0)
            throw ServiceException("Exception: Rate cannot be negative!");
    }
    void display()  {
        Service::display();//go to base class display fun
        cout << "Hours: " << hours << endl;
        cout << "Rate Per Hour: " << ratePerHour << endl;
        cout << "Bill Amount: " << calculateBill() << endl;
    }
    double calculateBill()  {
        return hours * ratePerHour;//Bill calculation
    }
};

int main() {
    Service* services[5]; //Base class obj
    int count = 0;
    int choice;

    do {
        cout << "\n1. Add Internet Service";
        cout << "\n2. Add Cleaning Service";
        cout << "\n3. Show All Services";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 5) {
                services[count] = new InternetService();
                try {
                    services[count]->accept();
                    count++;
                } catch (ServiceException& e) {
                    e.display();
                    delete services[count];
                }
            }
            break;

        case 2:
            if (count < 5) {
                services[count] = new CleaningService();
                try {
                    services[count]->accept();
                    count++;
                } catch (ServiceException& e) {
                    e.display();
                    delete services[count];
                }
            }
            break;

        case 3:
            for (int i = 0; i < count; i++) {
                services[i]->display();
                cout << endl;
            }
            break;

        case 4:
            break;

        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    for (int i = 0; i < count; i++)
        delete services[i];//delete all obj
}
