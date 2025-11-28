/*
#include<bits/stdc++.h>
using namespace std;
class person{
    public:
        string name;
        int age;
        person(string name,int age){
            this->name = name;
            this->age = age;
        }
};
class student : public person{
    public:
        int roll;
        student(string name,int age,int roll) : person(name,age){
            this->roll = roll;
        }
};
class gra : public student{
    public:
        string project;
        gra(int roll,string name,int age,string project) : student(name,age,roll){
            this->project = project;
        }
};
class teach : public student,public gra{
    public:
    int resscore;
    teach(int roll,string name,int age,string project,int resscore) : student(name,age,roll),gra(roll,name,age,project){
        this ->resscore = resscore;
    }
};
int main(){
    person s1("suri",15);
    student s2("royaa",18,215);
    gra s3(210,"royaa",21,"YOUTUBE INTERFACE USING HTML");
    teach s4(223,"sure",21,"TIC-TAC-TO USING CPP",71);
    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << " " << s2.roll << endl;
    cout << s3.roll << " " << s3.name << " " << s3.age << " " << s3.project << endl;
    cout << s4.roll << " " << s4.name << " " << s4.age << " " << s4.project << " " << s4.resscore << endl;
    return 0;

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,cy=0,ci=0;
	    cin >> n;
	    string x;
	    cin >> x;
	    for(int i=0;x[i] != '\0';i++){
	        if(x[i]=='Y') cy++;
	        else if(x[i]=='I') ci++;
	    }
	    if(cy > ci) cout << "NOT INDIAN" << endl;
	    else if(cy < ci) cout << "INDIAN" << endl;
	    else cout << "NOT SURE" << endl;
	}
	return 0;
}
