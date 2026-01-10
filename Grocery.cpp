#include<iostream>
using namespace std;
template<class T>
class Price
{
private:
    T basePrice;
    T finalPrice;
public:
    void setPrice(T value){
        basePrice = value;
        finalPrice = value;
    }
    void addGST(T percent){
        finalPrice = basePrice + (basePrice * percent / 100);
    }
    void showFinalPrice(){
        cout<<"Final Price :"<<finalPrice<<endl;
    }
};

int main(){
    Price<float> grocery;
    grocery.setPrice(96.6f);
    grocery.addGST(5.0f);
    grocery.showFinalPrice();

    Price<double> electronics;
    electronics.setPrice(100000.0);
    electronics.addGST(18.0);
    electronics.showFinalPrice();
}