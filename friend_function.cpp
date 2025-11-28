#include <bits/stdc++.h>
using namespace std;

class student;
class Teacher{
    public:
        void evaluate(student s);
};
class student{
    private:
        int marks = 95;
        friend class Teacher;
        friend void Teacher :: evaluate(student s);
};
void Teacher::evaluate(student s){
    cout << "Teacher Evaluating Student. Marks : " << s.marks << endl;
}
int main(){
    student stu;
    Teacher t;
    t.evaluate(stu);
    return 0;
}
else {
    
}