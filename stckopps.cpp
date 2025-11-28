#include<bits/stdc++.h>
using namespace std;
class stacks{
    private:
        int top,arr[100];
    public:
        stacks() : top(-1) {}
        bool isEmpty(){
            return top == -1;
        }
        bool isFULL(){
            return top == 99;
        }
        void push(int x){
            if(!isFULL()) arr[++top]=x;
        }
        int pop(){
            if(!isEmpty()) return arr[top--];
            return -1;
        }
        int peek(){
            return (isEmpty()) ? -1 : arr[top];
        }
};
int main(){
    stacks s1;
    s1.push(3);
    s1.push(10);
    cout << s1.peek() << " " << s1.isEmpty() << " " << s1.isFULL() << endl;
    return 0;
}