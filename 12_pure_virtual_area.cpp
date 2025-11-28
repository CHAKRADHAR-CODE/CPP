#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
        virtual void area() = 0;
};
class circle : public shape{
    float r;
    public:
        void getdata(){
            cout << "Enter Radius of The Circle : ";
            cin >> r;
        }
        void area()override{
            cout << "Radius Of Circle : " << 3.14 * r * r << endl;
        }
};
class rectangle : public shape{
    float l , b;
    public:
        void getdata(){
            cout << "Enter The Length And Breadth : " ;
            cin >> l >> b;
        }
        void area()override{
            cout << "Area of Rectangle : " << l*b << endl;
        }
};
class triangle : public shape{
    float b ,h;
    public:
        void getdata(){
            cout << "Enter Base and Height of Triangle : ";
            cin >> b >> h;
        }
        void area() override{
            cout << "Area of Triangle : " << 0.5*b*h << endl;
        }
};
int main(){
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