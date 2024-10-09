#include <iostream>
using namespace std;

class ATMClass{

    public :
        string username;
        int balance;

        ATMClass(string username, int balance){
            this->username = username;
            this->balance = balance;
        }

    public:
        void ShowLastestBalance(){
            cout << "---------------------------------------------------" << endl;
            cout << "Current Balance of " << this->username << " : " << this->balance << " Baht" << endl;
            cout << "---------------------------------------------------" << endl;
        }

    public:
        void deposit(){
            int amount;

            cout << "Deposit amount : ";
            cin >> amount;
            this->balance = this->balance + amount;
            cout << "+ " << amount << endl;
        }

    public:
        void withdraw(){
            int amount;

            cout << "Withdraw amount : ";
            cin >> amount;
            this->balance = this->balance - amount;
            cout << "- " << amount << endl;
        }
};


int main(){

    int option;

    ATMClass Atm1("Play2", 1000);

    Atm1.ShowLastestBalance();

    while (true)
    {
        cout << "Choose your transaction" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check current balance" << endl;
        cout << "Select : ";
        cin >> option;

        if(option == 1){
            Atm1.deposit();
        }else if (option == 2){
            Atm1.withdraw();
        }else if(option == 3){
            Atm1.ShowLastestBalance();
        }else{
            cout << "Invalid Number";
        }
    }
}