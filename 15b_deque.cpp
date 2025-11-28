#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> x;

    x.push_back(10);
    x.push_back(11);
    x.push_front(9);
    x.pop_back();
    x.pop_front();

    cout << "Deque elimwnts : ";
    for(int y : x) cout << y << " ";
    cout << endl;
    return 0;
}