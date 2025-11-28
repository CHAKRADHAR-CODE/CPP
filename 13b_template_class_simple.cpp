#include<bits/stdc++.h>
using namespace std;
template <class T>
class pairs{
    public:
        T a,b;
        void set(T x,T y){
            a = x;
            b = y;
        }
        T get(){
            return a+b;
        }
};
int main(){
    pairs<int> z;
    z.set(5,10);
    cout << "Sum of Integers : "  << z.get() << endl;

    pairs<float> m;
    m.set(5.3,10.5);
    cout << "Sum of floatpair : "  << m.get() << endl;
    return 0;
}