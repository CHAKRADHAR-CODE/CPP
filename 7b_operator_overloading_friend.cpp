#include <bits/stdc++.h>
using namespace std;
class my{
    private:
        int x;
    public:
        my(int y = 0){
            x = y;
        }
        void display(){
            cout << "Value = " << x << endl;
        }
        friend void operator-(my &n);
        friend my operator+(my s1,my s2);
};
void operator-(my &n){
    n.x = -n.x;
}
my operator+(my s1,my s2){
    my temp;
    temp.x = s1.x + s2.x;
    return temp;
}
int main(){
    my s1(100),s2(200);
    cout << "Original numbers:" << endl;
    s1.display();
    s2.display();

    -s1;
    cout << "After unary negation :" << endl;
    s1.display();

    my s3 = s1+s2;
    cout << "After binary addition :" << endl;
    s3.display();
    return 0;
}