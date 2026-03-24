// 1) Write a program to implement collision resolution techniques of Hash data structure.

#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

class Separate{
    vector<int> x[SIZE];
    public:
        int hashing(int key){
            return key % SIZE;
        }
        void insert(int key){
            int i = hashing(key);
            x[i].push_back(key);
        }
        void display(){
            cout << endl << "Separate Chaining: " << endl;
            for(int i=0;i<SIZE;i++){
                cout << i << " -> ";
                for(int z:x[i]) cout << z << " -> ";
                cout << "NULL" << endl;
            }
        }
};

class Linear{
    vector<int> x;
    public :
        Linear(){
            x.assign(SIZE,-1);
        }
        int hashing(int key){
            return key % SIZE;
        }
        void insert(int key){
            int i = hashing(key);
            while(x[i] != -1) i = (i+1)%SIZE;
            x[i] = key;
        }
        void display(){
            cout << endl << "Linear Chaining: " << endl;
            for(int i=0;i<SIZE;i++){
                cout << i << " -> ";
                if(x[i] != -1) cout << x[i] << endl;
                else cout << "NULL" << endl;
            } 
        }
};
int main(){
    Separate s;
    Linear l;
    vector<int> keys = {15,25,35,20,30};
    for(int k:keys){
        s.insert(k);
        l.insert(k);
    }
    s.display();
    l.display();
    return 0;
}