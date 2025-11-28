#include <iostream>
using namespace std;
template < class T1,class T2>
class p{
    private:
        T1 x;
        T2 y;
    public:
        void set(T1 a,T2 b){
            x = a;
            y = b;
        }
        void get(){
            cout << "First : " << x << ", Second : " << y << endl;
        }
};
int main(){
    p<int,float> z;
    z.set(5,10.5);
    z.get();

    p<string,int> m;
    m.set("suri",10);
    m.get();
    return 0;
}