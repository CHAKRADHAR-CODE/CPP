//      SET - 1
'''
a) Develop a C++ Program to Find Factorial of a Given Number Using Recursion.
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout << "Enter A Number : ";
    cin >> n;
    cout << "Factorial of " << n << " is : " << fact(n) << endl;
    return 0;
}
'''
🧠 Explanation:
    factorial() function calls itself until n becomes 1 or 0.
    Base case stops recursion when n == 0 or n == 1.
    ach call multiplies n with factorial(n-1).
    Result is printed in main().

🧾 Example Output:
Enter a number: 5
Factorial of 5 is: 120
'''

'''
b) Develop a C++ Program to swap two numbers using call by value
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

void swapvalue(int a,int b){
    swap(a,b);
    cout << "Inside Function(After Swapping) : a = " << a << ", b = " << b << endl;
}
int main(){
    int a,b;
    cout << "Enter Two Numbers : ";
    cin >> a >> b;
    cout << "\nBefore swapping: x = " << a << ", y = " << b << endl;
    swapvalue(a,b);
    cout << "\nAfter function call: x = " << a << ", y = " << b << endl;
    return 0;
}

'''
🧠 Explanation:
    In Call by Value, a copy of each variable is passed to the function.
    Changes made inside the function don’t affect the original variables in main().
    So, even though numbers are swapped inside the function, the main values remain unchanged.

🧾 Example Output:
Enter two numbers: 5 10

Before swapping: x = 5, y = 10
Inside function (after swapping): a = 10, b = 5

After function call: x = 5, y = 10
'''

// -------------------------------------------------------------------------------------------------

// Set - 3
'''
a) The class BankAccount holds: accNo, name, and balance as data members.
Functions: openAccount(), deposit(), withdraw(), display().
User gives input for account details.
Then deposits and withdraws money.
Finally, account details are displayed.
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        int accNo;
        string name;
        double balance;

    public:
        void openAccount(){
            cout << "Enter Account Number : ";
            cin >> accNo;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Initial Balance : ";
            cin >> balance;
        }

        void deposit(){
            double amount;
            cout << "\n Enter Amount To Deposit : ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }

        void withdraw(){
            double amount;
            cout << "\n Enter Amount To Withdraw : ";
            cin >> amount;
            if(amount > balance) cout << "Insufficient balance!" << endl;
            else{
                balance -= amount;
                cout << "Amount Withdrawn Successfully!" << endl;
            }
        }

        void display(){
            cout << "\nAccount Details:" << endl;
            cout << "Account Number: " << accNo << endl;
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main(){
    BankAccount x;
    x.openAccount();
    x.deposit();
    x.withdraw();
    x.display();
    return 0;
}

'''
🧠 Explanation:
    The class BankAccount holds:
        accNo, name, and balance as data members.
        Functions: openAccount(), deposit(), withdraw(), display().

    User gives input for account details.
    Then deposits and withdraws money.
    Finally, account details are displayed.

🧾 Example Output:
Enter Account Number: 101
Enter Name: Raju
Enter Initial Balance: 5000
Enter amount to deposit: 2000
Amount Deposited Successfully!
Enter amount to withdraw: 1000
Amount Withdrawn Successfully!

Account Details:
Account Number: 101
Name: Raju
Balance: 6000
'''

'''
b) Create a C++ program that illustrates the difference between the public and private access
specifies.
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        int rollNO;
    public:
        string name;
        void setroll(int r){
            rollNO = r;
        }
        void display(){
            cout << "Roll : " << rollNO << endl;
            cout << "Name : " << name << endl;
        }
};
int main(){
    student x;
    cout << "Enter student name: ";
    cin >> x.name;

    int r;
    cout << "Enter roll number: ";
    cin >> r;
    x.setroll(r);

    cout << "\nStudent Details:" << endl;
    x.display();
    return 0;
}

'''
🧠 Explanation:
    Private members (rollNo)
        Cannot be accessed directly outside the class.
        Can only be modified using public functions (setRollNo() here).

    Public members (name)
        Can be accessed directly from anywhere (inside or outside the class).

🧾 Example Output:
Enter student name: Ramu
Enter roll number: 23

Student Details:
Name: Ramu
Roll Number: 23

'''

// -------------------------------------------------------------------------------------------------

// Set - 5
'''
a) Create a C++ program that demonstrates the use of constructors and destructors in a class.
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class demo{
    public:
        demo(){
            cout << "Constructor called!" << endl;
        }
        void display(){
            cout << "Object is active" << endl;
        }
        ~demo(){
            cout << "Destrucator called!" << endl;
        }
};
int main(){
    demo x;
    x.display();
    return 0;
}

'''
🧠 Explanation:
    When the object x is created → the constructor is automatically called.
    When the function x.display() runs → it prints "Object is active".
    When the program ends and object x goes out of scope → the destructor is automatically called.

🧾 Example Output:
Constructor called!
Object is active
Destrucator called!
'''

'''
b)  Develop a C++ program that illustrates constructor overloading.
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int Roll;
        string Name;
    public:
        student(){
            Roll = 0;
            Name = "Unknown";
            cout << "Default constractor Called!" << endl;
        }

        // Parameterized Constructor (1 parameters)
        student(int r){
            Roll = r;
            Name = "Unknown";
            cout << "Parameterized Constructor (1 parameters) Called!" << endl;
        }

        // Parameterized Constructor (2 parameters)
        student(int r,string n){
            Roll = r;
            Name = n;
            cout << "Parameterized Constructor (2 parameters) Called!" << endl;
        }

        void display(){
            cout << "Student Data :  Roll Number = " << Roll << " , Name = " << Name << endl;
        }
};
int main(){
    cout << "Creating Object 1 : " << endl;
    student s1;
    s1.display();

    cout << "\nCreting Object 2 : " << endl;
    student s2(213);
    s2.display();

    cout << "\nCreating Object 3 : " << endl;
    student s3(31,"suri");
    s3.display();
    return 0;
}

'''
🧠 Explanation:
    Constructor Overloading means having multiple constructors in the same class,
        each with different numbers or types of parameters.
    Depending on how you create the object, the correct constructor is called automatically.

🧾 Example Output:
Creating Object 1 :
Default constractor Called!
Student Data :  Roll Number = 0 , Name = Unknown  

Creting Object 2 :
Parameterized Constructor (1 parameters) Called!  
Student Data :  Roll Number = 213 , Name = Unknown

Creating Object 3 :
Parameterized Constructor (2 parameters) Called!
Student Data :  Roll Number = 31 , Name = suri
'''


// -------------------------------------------------------------------------------------------------

// Set - 7
'''
a) Develop C++ programs to demonstrate Multilevel of inheritance
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class GrandParent{
    public:
        void displaygp(){
            cout << "GrandParent Function Called!" << endl;
        }
};

class parent : public GrandParent{
    public:
        void displayParent(){
            cout << "Parent Function Called!" << endl;
        }
};

class child : public parent{
    public:
        void displayChild(){
            cout << "Child Function Called!" << endl;
        }
};

int main(){
    child x;
    x.displaygp();
    x.displayParent();
    x.displayChild();
}

'''
🧠 Explanation:
    GrandParent → parent → child (three levels).
    Each class adds its own function, and the object of the child class accesses all

🧾 Example Output:
GrandParent Function Called!
Parent Function Called!
Child Function Called!

'''
'''
b) Develop a C++ program that illustrates the order of execution for constructors and destructors in
the context of inheritance. 
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        base(){
            cout << "BASE Class Constractor called!" << endl;
        }
        ~base(){
            cout << "BASE Class destructors called!" << endl;
        }
};
class derived : public base{
    public:
        derived(){
            cout << "DERIVED Class Constractor called!" << endl;
        }
        ~derived(){
            cout << "DERIVED Class destructors called!" << endl;
        }
};

int main(){
    cout << "Creatiing Dervied object : " << endl;
    derived x;
    cout << "Exting Main" << endl;
}

'''
🧠 Explanation:
    Constructor Order:
        When an object of the most derived class (SubDerived) is created,
        constructors are called from base → derived → most derived.

    Destructor Order:
        When the object goes out of scope, destructors are called in reverse order,
        i.e., most derived → derived → base.

🧾 Example Output:
Creatiing Dervied object : 
BASE Class Constractor called!
DERIVED Class Constractor called!
Exting Main
DERIVED Class destructors called!
BASE Class destructors called!
'''


// -------------------------------------------------------------------------------------------------

// Set - 9
'''
a) Develop a C++ program to demonstrate the use of virtual functions to achieve dynamic dispatch
and enable runtime polymorphism.
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

class base{
    public:
        virtual void display(){
            cout << "This is the Base class Display Function" << endl;
        }
};
class dervied:public base{
    public:
        void display() override{
            cout << "This Is the Dervied class Display Function" << endl;
        }
};
int main(){
    base *x;
    dervied y;

    x = &y;
    x -> display();

    return 0;
}

'''
🧠 Explanation:
    This program demonstrates runtime polymorphism using a virtual function.
    A base class pointer calls the overridden function of the derived class.
    Thus, the derived class function executes at runtime, showing dynamic dispatch.

🧾 Example Output:
This Is the Dervied class Display Function


'''

'''
b) Develop a C++ program that illustrates runtime polymorphism using virtual functions 
A)
CODE :
'''

#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
        virtual void draw(){
            cout << "Drawing a Generinc Shape!" << endl;
        }
};
class circle:public Shape{
    public:
        void draw(){
            cout << "Drawing circle!" << endl;
        }
};
class rectangle:public Shape{
    public:
        void draw(){
            cout << "Drawing rectangle" << endl;
        }
};

int main(){
    Shape *x;
    circle c;
    rectangle r;

    x = &c;
    x -> draw();

    x = &r;
    x -> draw();
    return 0;
}



'''
🧠 Explanation:
    virtual keyword tells the compiler to perform runtime binding.
    This means the function to call is decided at runtime, not at compile time.
    A base class pointer (shapePtr) can point to any derived class object.
    The correct draw() function of the derived class is executed at runtime.
    Without virtual, it would always call the base class version.

🧾 Example Output:
Drawing circle!
Drawing rectangle

'''

// -------------------------------------------------------------------------------------------------

// Set - 11
'''
a) Develop a C++ program that demonstrates exception handling using try, throw, and catch blocks.
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    try{
        if(y==0) throw "Division By ZERO is not Allowed";
        else cout << "Result : " << (float)x/y << endl;
    }
    catch(const char *z){
        cout << "Exception Caught : " << z << endl;
    }
    return 0;
}

'''
🧠 Explanation:
    try block:
        Contains code that might throw an exception.

    throw statement:
        Used to throw an exception when something goes wrong (like dividing by zero).

    catch block:
        Catches the thrown exception and handles it gracefully — avoiding program crash.

🧾 Example Output:
Enter two numbers: 10 2
Result: 5

'''

'''
b) Develop a C++ program to illustrate the use of multiple catch statements, where different types
of exceptions are caught and handled differently.
A)
CODE :
'''
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    try{
        if(y==0) throw 0;
        else if(x<0 || y<0) throw "Negative Number are Not Allowed";
        else cout << "Result : " << (float)x/y << endl;
    }
    catch(int){
        cout << "Exception Caught : Division By ZERO is not Allowed " << endl;
    }
    catch(const char *z){
        cout << "Exception Caught : " << z << endl;
    }
    catch(...){
        cout << "Unknown exception caught." << endl;
    }
    return 0;
}

'''
🧠 Explanation:
    try block:
        Contains code that might throw an exception.

    throw statement:
        Used to throw an exception when something goes wrong (like dividing by zero).

    catch block:
        Catches the thrown exception and handles it gracefully — avoiding program crash.

🧾 Example Output:
Enter two numbers: 5 2
Result : 2.5

'''
// -------------------------------------------------------------------------------------------------