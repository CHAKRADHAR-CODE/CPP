// 5. Static Member Variable
// Problem: Create a class Employee to count how many objects are created using a static variable.
#include<bits/stdc++.h>
using namespace std;
class  simple_calculator{
    static int c;
    public :
        simple_calculator(){
            c+=1;
        }
        void display(){
            cout<< c << endl;
        }
};
int simple_calculator :: c=1;
int main(){
    simple_calculator s1;
    simple_calculator s2;
    s1.display();
}