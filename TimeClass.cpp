#include <iostream>
using namespace std;

class Time {
    int hour, minute, second;
public:
    Time() 
        { 
            hour = minute = second = 0; 
        }
    Time(int h) 
        { 
            hour = h; minute = second = 0; 
        }
    Time(int h, int m) 
        { 
            hour = h; minute = m; second = 0; 
    
        }
    Time(int h, int m, int s) { hour = h; minute = m; second = s; 
    }

    void init_Time() 
        { 
            hour = minute = second = 0; 
        }
    void accept_Input() 
        { 
            cin >> hour >> minute >> second; 
        }
    void display_Output() 
        { 
            cout << hour << ":" << minute << ":" << second << endl; 
        }

    void setHour(int h) 
        { 
            hour = h; 
        }
    void setMinute(int m) 
        { 
            minute = m; 
        }
    void setSecond(int s) 
        { 
            second = s; 
        }

    int getHour() 
        { 
            return hour; 
        }
    int getMinute() 
        { 
            return minute; 
        }
    int getSecond() 
        { 
            return second; 
        }

    ~Time() {}
};

int main() {
    Time t1;
    //t1.setHour(12);
    t1.accept_Input();
    t1.display_Output();
    return 0;
}
