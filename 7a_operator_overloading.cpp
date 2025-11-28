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
        void operator-(){
            x = -x;
        }
        my operator+(my y){
            my temp;
            temp.x = x + y.x;
            return temp;
        }
};
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