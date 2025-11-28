// 2. Access Specifiers and Their Scope
// Problem: Create a class Account with private balance, protected accountNumber, and public holderName. Show how to access each correctly.
#include<bits/stdc++.h>
using namespace std;
class Account{
    private:
        int balance;
    protected:
        int accountNumber;
    public:
        string holderName;
        void setter(int x, string y, int z) {
        this->accountNumber = x;
        this->holderName = y;
        this->balance = z;
        }
        void display(){
            cout << endl << "ACCOUNT NUMBER : " << accountNumber << endl << "NAME : " << holderName << endl << "BANANCE : " << balance << endl << endl;
        }
};
int main(){
    int n;
    cout << "ENTER HOW MANY ACCOUNTS YOU NEED : ";
    cin >> n;
    Account s[n];
    for(int i=0;i<n;i++){
        int x,z;
        string y;
        cout << endl <<  "ENTER THE DETAILS OF FIRST ACCOUNT : " << i+1 << endl;
        cout << "ENTER THE ACCOUNT NUMBER : ";
        cin >> x;
        cout << "ENTER THE ACCOUNT HOLDER NAME : ";
        cin >> y;
        cout << "ENTER THE BALANCE : ";
        cin >> z;
        s[i].setter(x,y,z);
    }
    for(int i=0;i<n;i++){
        s[i].display();
    }
}