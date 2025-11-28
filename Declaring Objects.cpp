// 1. Declaring Objects
// Problem: Create a class Student with roll number and name. Declare two objects and display their values using a member function.

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        int roll_number;
        string name;
    void display(){
        cout << "ROLL NUMBER : " << roll_number << endl << "NAME : " << name << endl << endl;
        
    }
    
};
int main(){
    student s1;
    student s2;
    s1.roll_number = 31;
    s1.name = "suri";
    s2.roll_number = 84;
    s2.name = "royaa";
    s1.display();
    s2.display();
}
