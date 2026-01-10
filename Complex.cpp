#include<iostream>
using namespace std;

class complex{
    private:
        int realnum;
        int imagnum;
    public:
        complex(){
            realnum=0;
            imagnum=0;
        }
        complex(int realnum ,int imagnum){
            this->realnum=realnum;
            this->imagnum=imagnum;
        }
        complex(complex &obj){
            this->realnum=obj.realnum;
            this->imagnum=obj.imagnum;
        }
        void display(){
            cout<<"Complex number is :"<<this->realnum<<"+"<<this->imagnum<<endl;
        }
};

int main(){
    complex c1(15 , 23);
    c1.display();
    complex c2 = c1;
    c2.display();

}