// 4. Rules for Inline Functions
// Problem: Create a class Calculator with inline functions for add, subtract, and multiply two integers.
#include<bits/stdc++.h>
using namespace std;
class  simple_calculator{
    public :
        inline void add(int x,int y){
            cout << "ADD : " << x+y << endl;
        }
        inline void subtract(int x,int y){
            cout << "SUBTRACT : " << x-y << endl;
        }
        inline void multiply(int x,int y){
            cout << "MULTIPLY : " << x*y << endl;
        }
};
int main(){
    simple_calculator s1;
    s1.add(10,20);
    s1.subtract(10,20);
    s1.multiply(10,20);
    return 0;
}