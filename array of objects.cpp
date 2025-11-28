#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    static string college;
    int roll;
    string dept;
    Student(string name, int roll,string dept){
        this->name = name;
        this->roll = roll;
        this->dept = dept;
    }
    static void changecollage(string s){
        college = s;
        cout << college << endl;
    }
    void changeRoll(int x){
        roll = x;
    }
};
string Student::college = 'AUS';
int main(){
    Student s1("Ashok",123,"CSE");
    Student s2("Rajesh",134,"Aiml");
    s1.ChangeCollege("ACET");
    s1.changeRoll(111);
    cout << s1.roll << endl;
    cout << s2.roll << endl;
}