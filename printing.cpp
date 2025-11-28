// Question 1
i) Question 
    (1a) Find the roots of a quadratic equation.

ii) Description
    This program calculates the roots of a quadratic equation ax^2 + bx + c = 0.
    It first takes input for coefficients a, b, and c from the user.
    Then, it computes the discriminant to check the nature of roots.
    Finally, it prints real or complex roots accordingly.  */

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    double d = (b*b) - (4*a*c);

    if (d > 0) {
        double r1 = (-b + sqrt(d)) / (2*a);
        double r2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    } else if (d == 0) {
        double r = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << r << endl;
    } else {
        double r = -b / (2*a);
        double imag = sqrt(-d) / (2*a);
        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << r << " + " << imag << "i" << endl;
        cout << "Root 2 = " << r << " - " << imag << "i" << endl;
    }

    return 0;
}

// iv) Output (example)
/*
    Enter coefficients a, b and c: 1 -3 2
    Roots are real and different.
    Root 1 = 2
    Root 2 = 1
*/

/*
i) Question 
    (1b) Find factorial of a given number using recursion.

ii) Description
    This program calculates the factorial of a number using recursion.
    It takes input from the user for the number.
    The recursive function multiplies the number by factorial of (number-1) until 1.
    Finally, it prints the factorial or an error for negative numbers.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int factorial(int x) {
    if (x == 0 || x == 1) 
        return 1;
    return x * factorial(x - 1);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << x << " = " << factorial(x) << endl;

    return 0;
}

// iv) Output (example)
/*
    Enter a number: 5
    Factorial of 5 = 120
*/

----------------------------------------------------------------------------------------------------

// Question 2
/*
i) Question 
    (2a) Implement scope resolution and namespaces.

ii) Description
    This program demonstrates the use of global, local variables and namespaces.
    It shows how to access variables using the scope resolution operator (::).
    A namespace named 'my' is created with its own variable and function.
    The program prints values from local, global, and namespace variables.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global variable 

namespace my {
    int x = 20;
    void display() {
        cout << "Inside My, num = " << x << endl;
    }
}

int main() {
    int x = 50;
    cout << "Local num = " << x << endl;
    cout << "Global num = " << ::x << " (using scope resolution)" << endl;
    my::display();
    cout << "Accessing num from namespace: " << my::x << endl;
    return 0;
}

// iv) Output (example)
/*
    Local num = 50
    Global num = 10 (using scope resolution)
    Inside My, num = 20
    Accessing num from namespace: 20
*/


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

----------------------------------------------------------------------------------------------------

// Question 3
/*
i) Question 
    (3) Implement inline functions and function overloading.

ii) Description
    This program demonstrates the use of inline functions and function overloading.
    The inline function 'mul()' calculates the square of a number.
    The function 'add()' is overloaded to handle both integer and float addition.
    The program shows how the correct version of 'add()' is chosen based on argument types.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

inline int mul(int x) {
    return x * x;
}

int add(int x, int y) {
    return x + y;
}

float add(float x, float y) {
    return x + y;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square of " << x << " is " << mul(x) << endl;
    cout << "Addition of Integers : " << add(10, 20) << endl;
    cout << "Addition of Floating : " << add(2.5f, 2.5f) << endl;

    return 0;
}

// iv) Output (example)
/*
    Enter a number: 5
    Square of 5 is 25
    Addition of Integers : 30
    Addition of Floating : 5
*/

----------------------------------------------------------------------------------------------------

// Question 4
/*
i) Question 
    (4) Program to illustrate friend function.

ii) Description
    This program demonstrates the use of a friend function in C++.
    A class 'My' has a private data member 'box'.
    The friend function 'areavalue()' is able to access private members of the class.
    The program creates an object and prints the area using the friend function.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class My {
    private:
        int box;
    public:
        My(int i) {
            box = i;
        }
        friend void areavalue(My x);
};

void areavalue(My x) {
    cout << "Area of BOX : " << x.box << endl;
}

int main() {
    My b1(10);
    areavalue(b1);
    return 0;
}

// iv) Output (example)
/*
    Area of BOX : 10
*/

----------------------------------------------------------------------------------------------------

// Question 5
/*
i) Question 
    (5a) Program to illustrate the use of Constructors and Destructors.

ii) Description
    This program demonstrates how constructors and destructors work in C++.
    A class 'My' has private members 'id' and 'name' with a constructor and destructor.
    The constructor initializes the object and prints a message when called.
    The destructor is automatically called when the object goes out of scope.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class My {
    private:
        int id;
        string name;
    public:
        My(int x, string y) {
            id = x;
            name = y;
            cout << "Constructor called for " << name << endl;
        }
        void display() {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
        ~My() {
            cout << "Destructor called for " << name << endl;
        }
};

int main() {
    string name;
    int id;

    cout << "Enter name of student 1: ";
    cin >> name;
    cout << "Enter ID of student 1: ";
    cin >> id;

    My s1(id, name);
    s1.display();

    return 0;
}

// iv) Output (example)
/*
    Enter name of student 1: John
    Enter ID of student 1: 101
    Constructor called for John
    ID: 101, Name: John
    Destructor called for John
*/


/*
i) Question 
    (5b) Program to illustrate the use of Copy Constructor.

ii) Description
    This program demonstrates how a copy constructor works in C++.
    A class 'My' has private members 'id' and 'name' with a parameterized constructor.
    The copy constructor creates a new object as a copy of an existing object.
    The program shows both the original and copied object details.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class My {
    private:
        int id;
        string name;
    public:
        My(int x, string y) {
            id = x;
            name = y;
            cout << "Constructor called for " << name << endl;
        }
        My(const My &s) {
            id = s.id;
            name = s.name;
            cout << "Copy Constructor called for " << name << endl;
        }
        void display() {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
};

int main() {
    string name;
    int id;

    cout << "Enter name of student 1: ";
    cin >> name;
    cout << "Enter ID of student 1: ";
    cin >> id;

    My s1(id, name);
    s1.display();

    My s2 = s1;
    s2.display();

    return 0;
}

// iv) Output (example)
/*
    Enter name of student 1: John
    Enter ID of student 1: 101
    Constructor called for John
    ID: 101, Name: John
    Copy Constructor called for John
    ID: 101, Name: John
*/

----------------------------------------------------------------------------------------------------

// Question 6
/*
i) Question 
    (6) Program illustrating Constructor Overloading.

ii) Description
    This program demonstrates constructor overloading in a class.
    A default constructor initializes an object with default values.
    A parameterized constructor initializes an object with user-defined values.
    The program creates objects using both constructors and displays their details.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class My {
    private:
        int id;
        string name;
    public:
        My() {
            id = 0;
            name = "Unknown";
            cout << "Constructor called for " << name << endl;
        }
        My(int x, string y) {
            id = x;
            name = y;
            cout << "Constructor called for " << name << endl;
        }
        void display() {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
};

int main() {
    My s1(101, "suri");
    s1.display();
    My s2;
    s2.display();
    return 0;
}

// iv) Output (example)
/*
    Constructor called for suri
    ID: 101, Name: suri
    Constructor called for Unknown
    ID: 0, Name: Unknown
*/

----------------------------------------------------------------------------------------------------

// Question 7
/*
i) Question 
    (7a) Overload Unary and Binary Operators using member function.

ii) Description
    This program demonstrates operator overloading using member functions.
    A class 'my' has a private integer and overloads unary '-' and binary '+' operators.
    The unary operator negates the value of the object.
    The binary operator adds two objects and returns a new object.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class my {
    private:
        int x;
    public:
        my(int y = 0) {
            x = y;
        }
        void display() {
            cout << "Value = " << x << endl;
        }
        void operator-() {
            x = -x;
        }
        my operator+(my y) {
            my temp;
            temp.x = x + y.x;
            return temp;
        }
};

int main() {
    my s1(100), s2(200);
    cout << "Original numbers:" << endl;
    s1.display();
    s2.display();

    -s1;
    cout << "After unary negation :" << endl;
    s1.display();

    my s3 = s1 + s2;
    cout << "After binary addition :" << endl;
    s3.display();

    return 0;
}

// iv) Output (example)
/*
    Original numbers:
    Value = 100
    Value = 200
    After unary negation :
    Value = -100
    After binary addition :
    Value = 100
*/

/*
i) Question 
    (7b) Overload Unary and Binary Operators using friend function.

ii) Description
    This program demonstrates operator overloading using friend functions.
    A class 'my' has a private integer and uses friend functions to overload unary '-' and binary '+' operators.
    The unary operator negates the value of the object.
    The binary operator adds two objects and returns a new object.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class my {
    private:
        int x;
    public:
        my(int y = 0) {
            x = y;
        }
        void display() {
            cout << "Value = " << x << endl;
        }
        friend void operator-(my &n);
        friend my operator+(my s1, my s2);
};

void operator-(my &n) {
    n.x = -n.x;
}

my operator+(my s1, my s2) {
    my temp;
    temp.x = s1.x + s2.x;
    return temp;
}

int main() {
    my s1(100), s2(200);
    cout << "Original numbers:" << endl;
    s1.display();
    s2.display();

    -s1;
    cout << "After unary negation :" << endl;
    s1.display();

    my s3 = s1 + s2;
    cout << "After binary addition :" << endl;
    s3.display();

    return 0;
}

// iv) Output (example)
/*
    Original numbers:
    Value = 100
    Value = 200
    After unary negation :
    Value = -100
    After binary addition :
    Value = 100
*/

----------------------------------------------------------------------------------------------------

// Question 8
/*
i) Question 
    (8) Incorporate various forms of Inheritance:
        • Single Inheritance
        • Multiple Inheritance
        • Multi-level Inheritance
        • Hierarchical Inheritance
        • Hybrid Inheritance

ii) Description
    This program demonstrates different types of inheritance in C++.
    Single inheritance shows a derived class inheriting from one base class.
    Multiple inheritance allows a derived class to inherit from more than one base class.
    Multi-level, hierarchical, and hybrid inheritance examples illustrate complex class relationships.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

// 1. Single Inheritance
class A {
    public:
        void showa() {
            cout << "Single Inheritance: Class A" << endl;
        }
};

class B : public A {
    public:
        void showb() {
            cout << "Single Inheritance: Class B" << endl;
        }
};  

// 2. Multiple Inheritance
class C {
    public:
        void showc() {
            cout << "Multiple Inheritance: Class C" << endl;
        }
};

class D : public A, public C {
    public:
        void showd() {
            cout << "Multiple Inheritance: Class D" << endl;
        }
};  

// 3. Multi-level Inheritance
class E : public B {
    public:
        void showe() {
            cout << "Multi-level Inheritance: Class E" << endl;
        }
};

// 4. Hierarchical Inheritance
class F : public A {
    public:
        void showf() { 
            cout << "Hierarchical Inheritance: Class F" << endl; 
        }
};

class G : public A {
    public:
        void showg() { 
            cout << "Hierarchical Inheritance: Class G" << endl; 
        }
};

// 5. Hybrid Inheritance
class H : public B, public C {
    public:
        void showg() { 
            cout << "Hybrid Inheritance: Class H" << endl; 
        }
};

int main() {
    cout << "\n--- Single Inheritance ---" << endl;
    B b;
    b.showa();
    b.showb();

    cout << "\n--- Multiple Inheritance ---" << endl;
    D d;
    d.showa();
    d.showc();
    d.showd();

    cout << "\n--- Multi-level Inheritance ---" << endl;
    E e;
    e.showa();
    e.showb();
    e.showe();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    F f;
    f.showa();
    f.showf();

    G g;
    g.showa();
    g.showg();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    H h;
    h.showa();
    h.showb();
    h.showc();
    h.showg();

    return 0;
}

// iv) Output (example)
/*
--- Single Inheritance ---
Single Inheritance: Class A
Single Inheritance: Class B

--- Multiple Inheritance ---
Single Inheritance: Class A
Multiple Inheritance: Class C
Multiple Inheritance: Class D

--- Multi-level Inheritance ---
Single Inheritance: Class A
Single Inheritance: Class B
Multi-level Inheritance: Class E

--- Hierarchical Inheritance ---
Single Inheritance: Class A
Hierarchical Inheritance: Class F
Single Inheritance: Class A
Hierarchical Inheritance: Class G

--- Hybrid Inheritance ---
Single Inheritance: Class A
Single Inheritance: Class B
Multiple Inheritance: Class C
Hybrid Inheritance: Class H
*/

----------------------------------------------------------------------------------------------------
// Question 9
/*
i) Question 
    (9) Order of execution of constructors and destructors in inheritance.

ii) Description
    This program demonstrates the order in which constructors and destructors are called in inheritance.
    The base class constructor executes before the derived class constructor.
    Similarly, the derived class destructor executes before the base class destructor.
    The program creates a derived class object to illustrate this sequence.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class base {
    public:
        base() {
            cout << "Base class constructor called" << endl;
        }
        ~base() {
            cout << "Base class destructor called" << endl;
        }
};

class derived : public base {
    public:
        derived() {
            cout << "Derived class constructor called" << endl;
        }
        ~derived() {
            cout << "Derived class destructor called" << endl;
        }
};

int main() {
    cout << "Creating Derived object d:" << endl;
    derived d;
    return 0;
}

// iv) Output (example)
/*
    Creating Derived object d:
    Base class constructor called
    Derived class constructor called
    Derived class destructor called
    Base class destructor called
*/


----------------------------------------------------------------------------------------------------

// Question 10
/*
i) Question 
    (10) Illustrate the use of object as a class member, pointer to a class, this pointer, and Virtual Base Class.

ii) Description
    This program demonstrates several advanced object-oriented programming concepts in C++.
    It shows how to use an object as a class member, how pointers to class objects work, 
    how the 'this' pointer accesses class members, and how virtual base classes prevent ambiguity in multiple inheritance.
    The program combines all these concepts into a single working example.
*/

// iii) Code
#include <iostream>
using namespace std;

// ---------- Object as a Class Member ----------
class Address {
public:
    string city;
    int pincode;

    Address(string c = "Unknown", int p = 0) {
        city = c;
        pincode = p;
    }

    void showAddress() {
        cout << "City: " << city << ", Pincode: " << pincode << endl;
    }
};

// ---------- Virtual Base Class ----------
class Person {
public:
    string name;
    Person(string n = "NoName") {
        name = n;
        cout << "Person constructor called" << endl;
    }
};

// ---------- Derived Classes with Virtual Base ----------
class Student : virtual public Person {
public:
    int id;
    Student(string n, int i) : Person(n) {
        id = i;
        cout << "Student constructor called" << endl;
    }
};

// ---------- Another Derived Class (for Hybrid example) ----------
class Marks : virtual public Person {
public:
    int total;
    Marks(string n, int t) : Person(n) {
        total = t;
        cout << "Marks constructor called" << endl;
    }
};

// ---------- Derived Class from Multiple Virtual Bases ----------
class Result : public Student, public Marks {
private:
    Address addr; // Object as class member

public:
    Result(string n, int i, int t, string c, int p)
        : Person(n), Student(n, i), Marks(n, t), addr(c, p) {}

    // Using 'this' pointer
    void showDetails() {
        cout << "\nUsing this pointer:\n";
        cout << "Name: " << this->name << endl;
        cout << "ID: " << this->id << endl;
        cout << "Total Marks: " << this->total << endl;
        addr.showAddress();
    }
};

int main() {
    // Object creation (Virtual base ensures Person constructor runs once)
    Result r("Chakra", 101, 480, "Surampalem", 533437);

    // ---------- Pointer to Class ----------
    Result *ptr = &r;
    cout << "\nUsing Pointer to Object:\n";
    ptr->showDetails();

    return 0;
}

// iv) Output (example)
/*
    Person constructor called
    Student constructor called
    Marks constructor called

    Using Pointer to Object:

    Using this pointer:
    Name: Chakra
    ID: 101
    Total Marks: 480
    City: Surampalem, Pincode: 533437
*/

----------------------------------------------------------------------------------------------------

// Question 11
/*
i) Question 
    (11) Illustrate the concept of Runtime Polymorphism using Virtual Functions.

ii) Description
    This program demonstrates runtime polymorphism in C++ using virtual functions.
    The base class 'shape' defines a virtual function 'd()', which is overridden by derived classes 'circle' and 'Rectangle'.
    A base class pointer is used to call the appropriate function at runtime.
    This shows how dynamic binding works in object-oriented programming.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class shape {
    public:
        virtual void d() {
            cout << "Drawing a Generic shape" << endl;
        }
};

class circle : public shape {
    public:
        void d() override {
            cout << "Drawing a Circle" << endl;
        }
};

class Rectangle : public shape {
    public:
        void d() override {
            cout << "Drawing a Rectangle" << endl;
        }
};

int main() {
    shape *s;
    circle c;
    Rectangle r;

    s = &c;
    s->d();

    s = &r;
    s->d();
    return 0;
}

// iv) Output (example)
/*
    Drawing a Circle
    Drawing a Rectangle
*/


----------------------------------------------------------------------------------------------------

// Question 12
/*
i) Question 
    (12) Implement pure virtual function and calculate the area of different shapes by using abstract class.

ii) Description
    This program demonstrates the concept of abstract classes and pure virtual functions in C++.
    The base class 'shape' contains a pure virtual function 'area()', making it abstract.
    Derived classes 'circle', 'rectangle', and 'triangle' override the 'area()' function to compute their respective areas.
    The program takes user input and calculates the area for each shape.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

class shape {
    public:
        virtual void area() = 0; // Pure virtual function
};

class circle : public shape {
    float r;
    public:
        void getdata() {
            cout << "Enter Radius of The Circle : ";
            cin >> r;
        }
        void area() override {
            cout << "Area Of Circle : " << 3.14 * r * r << endl;
        }
};

class rectangle : public shape {
    float l, b;
    public:
        void getdata() {
            cout << "Enter The Length And Breadth : ";
            cin >> l >> b;
        }
        void area() override {
            cout << "Area of Rectangle : " << l * b << endl;
        }
};

class triangle : public shape {
    float b, h;
    public:
        void getdata() {
            cout << "Enter Base and Height of Triangle : ";
            cin >> b >> h;
        }
        void area() override {
            cout << "Area of Triangle : " << 0.5 * b * h << endl;
        }
};

int main() {
    circle c;
    rectangle r;
    triangle t;

    cout << "--- Circle ---" << endl;
    c.getdata();
    c.area();

    cout << "--- Rectangle ---" << endl;
    r.getdata();
    r.area();

    cout << "--- Triangle ---" << endl;
    t.getdata();
    t.area();

    return 0;
}

// iv) Output (example)
/*
    --- Circle ---
    Enter Radius of The Circle : 3
    Area Of Circle : 28.26

    --- Rectangle ---
    Enter The Length And Breadth : 4 5
    Area of Rectangle : 20

    --- Triangle ---
    Enter Base and Height of Triangle : 6 8
    Area of Triangle : 24
*/


----------------------------------------------------------------------------------------------------

// Question - 13
/*
i) Question 
    (13a) Illustrate the use of function template.

ii) Description
    This program demonstrates the concept of function templates in C++.
    A single template function 'add()' is defined to work with multiple data types.
    It takes two parameters of the same type and returns their sum.
    The program shows how the same function can handle both integer and float inputs.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x, y;
    float a, b;

    cout << "Enter Two integers : ";
    cin >> x >> y;
    cout << "Sum of The Integers : " << add(x, y) << endl;

    cout << "Enter two Float : ";
    cin >> a >> b; 
    cout << "Sum of The Float : " << add(a, b) << endl;

    return 0;
}

// iv) Output (example)
/*
    Enter Two integers : 10 20
    Sum of The Integers : 30
    Enter two Float : 2.5 3.5
    Sum of The Float : 6
*/

/*
i) Question 
    (13b) Implement template class.

ii) Description
    This program demonstrates the concept of class templates in C++.
    A template class 'pairs' is defined with a generic type 'T' to store two values.
    It has methods to set the values and return their sum using the 'get()' function.
    The program shows how the same class works for both integer and float data types.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

template <class T>
class pairs {
    public:
        T a, b;
        void set(T x, T y) {
            a = x;
            b = y;
        }
        T get() {
            return a + b;
        }
};

int main() {
    pairs<int> z;
    z.set(5, 10);
    cout << "Sum of Integers : " << z.get() << endl;

    pairs<float> m;
    m.set(5.3, 10.5);
    cout << "Sum of float pair : " << m.get() << endl;

    return 0;
}

// iv) Output (example)
/*
    Sum of Integers : 15
    Sum of float pair : 15.8
*/

/*
i) Question 
    (13c) Implement class templates with multiple parameters.

ii) Description
    This program demonstrates class templates with multiple type parameters in C++.
    A template class 'p' is defined with two generic types 'T1' and 'T2' to store two different types of values.
    It has methods to set the values and display them using 'get()'.
    The program shows how the same class works for various type combinations like int-float and string-int.
*/

// iii) Code
#include <iostream>
using namespace std;

template <class T1, class T2>
class p {
    private:
        T1 x;
        T2 y;
    public:
        void set(T1 a, T2 b) {
            x = a;
            y = b;
        }
        void get() {
            cout << "First : " << x << ", Second : " << y << endl;
        }
};

int main() {
    p<int, float> z;
    z.set(5, 10.5);
    z.get();

    p<string, int> m;
    m.set("suri", 10);
    m.get();

    return 0;
}

// iv) Output (example)
/*
    First : 5, Second : 10.5
    First : suri, Second : 10
*/

----------------------------------------------------------------------------------------------------

// Question - 14
/*
i) Question 
    (14a) Implement Exceptions handling.

ii) Description
    This program demonstrates basic exception handling in C++.
    It takes two integers as input and attempts to divide them.
    If the divisor is zero, an exception is thrown and caught using a try-catch block.
    The program displays an appropriate error message without crashing.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Two Digits : ";
    cin >> a >> b;

    try {
        if (b == 0) throw b;
        cout << "Result : " << a / b << endl;
    }
    catch (int e) {
        cout << "Exception caught! Division by " << e << " is not allowed." << endl;
    }

    return 0;
}

// iv) Output (example)
/*
    Enter Two Digits : 10 0
    Exception caught! Division by 0 is not allowed.
    
    Enter Two Digits : 20 4
    Result : 5
*/

/*
i) Question 
    (14b) Illustrate the use of multiple catch statements.

ii) Description
    This program demonstrates the use of multiple catch blocks in C++ exception handling.
    It takes two integers as input and checks for different error conditions.
    A string exception is thrown if division by zero occurs.
    An integer exception is thrown if any number is negative, and each is handled by a separate catch block.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter Two Digits : ";
    cin >> a >> b;

    try {
        if (b == 0) throw "Divisor by zero error!";
        else if (a < 0 || b < 0) throw -1;
        cout << "Result: " << a / b << endl;
    }
    catch (const char* m) {
        cout << "Exception caught: " << m << endl;
    }
    catch (int e) {
        cout << "Exception caught: Negative number (" << e << ")" << endl;
    }

    return 0;
}

// iv) Output (example)
/*
    Enter Two Digits : 10 0
    Exception caught: Divisor by zero error!

    Enter Two Digits : -5 10
    Exception caught: Negative number (-1)

    Enter Two Digits : 20 4
    Result: 5
*/

----------------------------------------------------------------------------------------------------

// Question - 15
/*
i) Question 
    (15a) Implement List, Vector and its Operations.

ii) Description
    This program demonstrates the use of STL containers 'list' and 'vector' in C++.
    It shows how to initialize, traverse, and perform basic operations like push, pop, and modify elements.
    List allows insertion and deletion at both ends, whereas vector supports random access.
    The program displays the contents of the containers before and after performing operations.
*/

// iii) Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    // --- List ---
    list<int> lis = {10, 20, 30};
    cout << "List elements : ";
    for (int x : lis) cout << x << " ";
    cout << endl;

    // --- List Operations ---
    lis.push_back(40);
    lis.push_front(0);
    lis.pop_back();

    cout << "List after operations: ";
    for (int x : lis) cout << x << " ";
    cout << endl;

    // --- Vector ---
    vector<int> vec = {100, 200, 300};
    cout << "Vector elements : ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    // --- Vector Operations ---
    vec.push_back(400);
    vec.pop_back();
    vec[0] = 10;

    cout << "Vector after operations : ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}

// iv) Output (example)
/*
    List elements : 10 20 30
    List after operations: 0 10 20 30
    Vector elements : 100 200 300
    Vector after operations : 10 200 300
*/

/*
i) Question 
    (15b) Implement Deque and its Operations.

ii) Description
    This program demonstrates the use of STL 'deque' in C++.
    A deque allows insertion and deletion from both front and back ends efficiently.
    The program performs operations like push_front, push_back, pop_front, and pop_back.
    It then displays the remaining elements in the deque after these operations.
*/

// iii) Code
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);   // Add at end
    dq.push_front(5);   // Add at front
    dq.push_back(20);   
    dq.pop_front();     // Remove front
    dq.pop_back();      // Remove back

    cout << "Deque elements: ";
    for(int x : dq)
        cout << x << " ";
    cout << endl;

    return 0;
}

// iv) Output (example)
/*
    Deque elements: 10
*/

/*
i) Question 
    (15c) Implement Map and its Operations.

ii) Description
    This program demonstrates the use of STL 'map' in C++.
    A map stores key-value pairs with unique keys and allows fast access, insertion, and deletion.
    The program inserts elements, traverses to display them, and deletes a key-value pair.
    It shows how map automatically sorts keys and maintains uniqueness.
*/

// iii) Code
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Insert key-value pairs
    m[1] = "Chakra";
    m[2] = "Rahul";
    m.insert({3, "Anu"});

    // Access elements
    cout << "Map elements:" << endl;
    for(auto &p : m)
        cout << p.first << " -> " << p.second << endl;

    // Delete element
    m.erase(2);

    cout << "After erasing key 2:" << endl;
    for(auto &p : m)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}

// iv) Output (example)
/*
    Map elements:
    1 -> Chakra
    2 -> Rahul
    3 -> Anu
    After erasing key 2:
    1 -> Chakra
    3 -> Anu
*/

----------------------------------------------------------------------------------------------------