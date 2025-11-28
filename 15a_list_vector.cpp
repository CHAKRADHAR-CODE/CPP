#include<bits/stdc++.h>
using namespace std;
int main(){
    // --- List ---
    list<int> lis={10,20,30};
    cout << "List elements : ";
    for(int x : lis) cout << x << " ";
    cout << endl;

    // --- List Operations---
    lis.push_back(40);
    lis.push_front(0);
    lis.pop_back();

    cout << "List after operations: ";
    for(int x : lis) cout << x << " ";
    cout << endl;

    vector<int> vec = {100,200,300};
    cout << "Vector Eliments : ";
    for(int x : vec) cout << x << " ";
    cout << endl;

    // --- List Operations---
    vec.push_back(400);
    vec.pop_back();
    vec[0]=10;

    cout << "List after operations: ";
    cout << "Vector Eliments : ";
    for(int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}