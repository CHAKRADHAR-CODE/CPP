#include<bits/stdc++.h>
using namespace std;
// 1. Single Inheritance
class A{
    public:
        void showa(){
            cout << "Single Inheritance: Class A" << endl;
        }
};
class B : public A{
    public:
        void showb(){
            cout << "Single Inheritance: Class B" << endl;
        }
};  

// 2. Multiple Inheritance
class C{
    public:
        void showc  (){
            cout << "Multiple Inheritance: Class C" << endl;
        }
};
class D : public A,public C{
    public:
        void showd(){
            cout << "Multiple Inheritance: Class D" << endl;
        }
};  

// 3. Multi-level Inheritance
class E : public B{
    public:
        void showe(){
            cout << "Multi-level Inheritance: Class E" << endl;
        }
};

// 4. Hierarchical Inheritance
class F : public A {
    public:
        void showf(){ 
            cout << "Hierarchical Inheritance: Class F" << endl; 
        }
};

class G : public A {
    public:
        void showg(){ 
            cout << "Hierarchical Inheritance: Class G" << endl; 
        }
};

// 5. Hybrid Inheritance
class H : public B,public C{
    public:
        void showg(){ 
            cout << "Hybrid Inheritance: Class H" << endl; 
        }
};

int main(){
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