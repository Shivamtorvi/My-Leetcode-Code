#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date() { day = month = year = 1; }
    Date(int d, int m, int y) { day = d; month = m; year = y; }

    void initDate() { day = month = year = 1; }
    void acceptDateFromConsole() { cin >> day >> month >> year; }
    void printDateOnConsole() { cout << day << "/" << month << "/" << year << endl; }

    bool isLeapYear() {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        return year % 4 == 0;
    }

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    ~Date() {}
};

int main() {
    Date d;
    d.acceptDateFromConsole();
    d.printDateOnConsole();
    cout << d.isLeapYear();
    return 0;
}
