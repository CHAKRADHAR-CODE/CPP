#include <bits/stdc++.h>
using namespace std;
class My{
    private:
        int id;
        string name;
    public:
        My(){
            id = 0;
            name = "Unknown";
            cout << "Constructo called for " << name << endl;
        }
        My(int x,string y){
            id = x;
            name = y;
            cout << "Constructor called for " << name << endl;
        }
        void display(){
            cout << "ID: " << id << ", Name: " << name << endl;
        }
};
int main(){
    My s1(101,"suri");
    s1.display();
    My s2;
    s2.display();
}