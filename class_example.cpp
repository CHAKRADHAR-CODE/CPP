#include<bits/stdc++.h>
using namespace std;
class student{
  public:
    string name;
    int marks;
    void result(){
      cout << "Name : " << name << endl << "marks : " << marks <<endl;
    }
};
int main(){
  student s1;
  s1.name = "ROHIT  ";
  s1.marks = 100;
  s1.result();
  return 0;
}