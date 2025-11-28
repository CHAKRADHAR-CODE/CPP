#include <bits/stdc++.h>
using namespace std;
class My{
    private:
        int box;
    public:
        My(int i){
            box = i;
        }
        friend void areavalue(My x);
};
void areavalue(My x){
    cout << "Area of BOX : " << x.box << endl;
}
int main(){
    My b1(10);
    areavalue(b1);
    return 0;
}