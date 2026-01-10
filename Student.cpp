#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollno;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollno = r;
        name = n;
        marks = m;
    }

    void displayOutput() const {
        cout << rollno << " " << name << " " << marks << endl;
    }

    char getGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }
};

int main() {
    const Student s1(101, "Shivam", 93);
    s1.displayOutput();
    cout << s1.getGrade();
    return 0;
}
