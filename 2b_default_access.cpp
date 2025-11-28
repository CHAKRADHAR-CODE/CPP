/*
i) Question 
    (2b) Illustrate the use of default arguments and access specifiers.

ii) Description
    This program demonstrates default arguments in a class constructor.
    It also shows the use of access specifiers: private and public.
    A class 'Student' is created with id and name as private members.
    The program creates objects with and without arguments and displays their details.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        int id;
        string name;
    public:
        Student(int i = 0, string n = "Unknown") {
            id = i;
            name = n; 
        }
        void display() {
            cout << "ID : " << id << endl << "NAME : " << name << endl << endl;
        }
};

int main() {
    Student s1(10, "suri");
    Student s2;
    s1.display();
    s2.display();
    return 0;
}

// iv) Output (example)
/*
    ID : 10
    NAME : suri

    ID : 0
    NAME : Unknown
*/
