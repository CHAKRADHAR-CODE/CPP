#include<bits/stdc++.h>
using namespace std;
class bank{
    double balance;
    public:
        void x(){
            cout << "Enter the Bank Balance : " ;
            cin >> balance;
        } 
        void y(){
            try{
                if(balance<1000) throw "You Have Less Amount In Your Account ";
                else cout << "You have Reqired Ammount" << endl;
            }
            catch(const char* y){
                cout << y << endl << "Still you Need : " << 1001-balance << endl;
            }
        }
};
int main(){
    bank b;
    b.x();
    b.y();
    return 0;
}



string 