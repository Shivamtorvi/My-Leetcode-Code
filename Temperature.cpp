#include<iostream>
using namespace std;
template<class T>
class Tempreture
{
    private:
        T celsius;
    public:
    Tempreture(T c)
    {
       celsius = c;
    }
    void show()
    {
        cout << "Celsius is : "<<celsius<<endl;
    }
    double toFahrenheits(){
        return (celsius * 9.0 / 5.0)+32;
    }
};

int main(){
    Tempreture<int> t1(50);
    Tempreture<float> t2(35.5);
    Tempreture<double> t3(80.40);

    t1.show();
    cout<<"Fahrenheit : "<<t1.toFahrenheits()<<endl;
    t2.show();
    cout<<"Fahrenheit : "<<t1.toFahrenheits()<<endl;
    t3.show();
    cout<<"Fahrenheit : "<<t1.toFahrenheits()<<endl;
}