#include<bits/stdc++.h>
using namespace std;
class shape{
    public:
        virtual void d(){
            cout << "Drawing a Generic shape" << endl;
        }
};
class circle : public shape{
    public:
        void d() override{
            cout << "Drawing a Circle" << endl;
        }
};
class Rectangle : public shape{
    public:
        void d() override{
            cout << "Drawing a Rectangle" << endl;
        }
};
int main(){
    shape *s;
    circle c;
    Rectangle r;

    s = &c;
    s->d();

    s = &r;
    s->d();
    return 0;
}