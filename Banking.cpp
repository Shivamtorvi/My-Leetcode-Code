#include<iostream>
using namespace std;

class BankingException{
    private:
        string msg;
    public:
        BankingException(string m){
            msg = m;
        }
        string what(){
            return msg;
        }
};

class Banking{
    private:
        int accId;
        double balance;
    public:


        void createAccount(int id , double bal){
            if(bal < 2000)
                throw BankingException("Balance should be min 2000 and above");
            accId = id;
            balance = bal;
            cout<<balance;
            
        }
        void deposit(double amt){
            if(amt < 0)
                throw BankingException("deposite value should not be negative value");
            balance += amt;
            display();
        }
        void withdraw(double amt) {
        if (balance - amt < 2000)
            throw BankingException("maintain minimum balance 2000");
        balance -= amt;
    }

    void display() {
        cout << "Account ID: " << accId << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main(){
    Banking b;
    int id;
    double amt;
    try
    {
        cout<<"Enter account id and initial balance :";
        cin>>id>>amt;
        b.createAccount(id , amt);

        cout << "Enter deposit amount: ";
        cin >> amt;
        b.deposit(amt);

        cout << "Enter withdrawal amount: ";
        cin >> amt;
        b.withdraw(amt);

        b.display();

    }
    catch(BankingException& e)
    {
        cout<< e.what() << '\n';
    }
    
}