#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="suri";
    m[2]="royya";
    m.insert({3,"boss"});

    cout << "Map elements :  " << endl;
    for(auto &p : m) cout << p.first << " -> " << p.second << endl;

    m.erase(2);
    cout << "After earase elements :  " << endl;
    for(auto &p : m) cout << p.first << " -> " << p.second << endl;
    return 0;
}