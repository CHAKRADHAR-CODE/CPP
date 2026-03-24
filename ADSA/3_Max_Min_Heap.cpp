// 3	Write a program to implement Max heap and Min heap operations.

#include<bits/stdc++.h>
using namespace std;
#define SIZE 100

class MaxHeap{
    int heap[SIZE];
    int n;
    public:
        MaxHeap(){
            n = 0;
        }
        void insert(int val){
            int i = n++;
            heap[i] = val;
            while(i != 0 && heap[(i-1)/2]<heap[i]){
                swap(heap[i],heap[(i-1)/2]);
                i = (i-1)/2;
            }
        }
        void deleted(){
            if(n<=0) return;
            heap[0] = heap[n-1];
            n--;
            int i = 0;
            while(2*i+1<n){
                int la = i;
                int left = 2*i+1;
                int right = 2*i+2;
                if(left < n && heap[left]>heap[la]) la = left;
                if(right < n && heap[right]>heap[la]) la = right;
                if(la!=i){
                    swap(heap[i],heap[la]);
                    i = la;
                }
                else break;
            }
        }
        void display(){
            cout << "Max Heap: ";
            for(int i=0;i<n;i++) cout << heap[i] << " ";
            cout << endl;
        }
};

class MinHeap{
    int heap[SIZE];
    int n;
    public:
        MinHeap(){
            n=0;
        }
        void insert(int val){
            int i = n++;
            heap[i] = val;
            while(i!=0 && heap[(i-1)/2]>heap[i]){
                swap(heap[i],heap[(i-1)/2]);
                i = (i-1)/2;
            }
        }
        void deleted(){
            if(n<=0) return;
            heap[0] = heap[n-1];
            n--;
            int i = 0;
            while(2*i+1<n){
                int s = i;
                int left = 2*i+1;
                int right = 2*i+2;
                if(left < n && heap[left]<heap[s]) s = left;
                if(right < n && heap[right]<heap[s]) s = right;
                if(s != i){
                    swap(heap[i],heap[s]);
                    i = s;
                }
                else break;
            }
        }
        void display(){
            cout << "Min Heap : ";
            for(int i=0;i<n;i++) cout << heap[i] << " ";
            cout << endl;
        }
};
int main(){
    MaxHeap ma;
    MinHeap mi;
    vector<int> x = {1,2,3,4,5};
    for(int y:x){
        ma.insert(y);
        mi.insert(y);
    }
    ma.display();
    mi.display();

    ma.deleted();
    mi.deleted();

    cout << "After Deletion : " << endl;
    ma.display();
    mi.display();
}

// output:
Max Heap: 5 4 2 1 3 
Min Heap : 1 2 3 4 5
After Deletion :
Max Heap: 4 3 2 1
Min Heap : 2 4 3 5