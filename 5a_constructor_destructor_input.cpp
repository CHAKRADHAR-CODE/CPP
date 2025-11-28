#include <bits/stdc++.h>
using namespace std;
class My{
    private:
        int id;
        string name;
    public:
        My(int x,string y){
            id = x;
            name = y;
            cout << "Constructor called for " << name << endl;
        }
        void display(){
            cout << "ID: " << id << ", Name: " << name << endl;
        }
        ~My(){
            cout << "Destructor called for " << name << endl;
        }
};
int main(){
    string name;
    int id;

    cout << "Enter name of student 1: ";
    cin >> name;
    cout << "Enter ID of student 1: ";
    cin >> id;
    My s1(id,name);
    s1.display();
}