// 4	Write a program to sort the given list of elements using Merge sort technique using divide and conquer approach.
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &x,int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    vector<int> L(n1),R(n2);
    for(int i=0;i<n1;i++) L[i] = x[l+i];
    for(int i=0;i<n2;i++) R[i] = x[mid+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]) x[k++] = L[i++];
        else x[k++] = R[j++];
    }
    while(i<n1) x[k++] = L[i++];
    while(j<n2) x[k++] = R[j++];
}
void mergeSort(vector<int> &x,int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(x,l,mid);
        mergeSort(x,mid+1,r);
        merge(x,l,mid,r);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0;i<n;i++) cin >> x[i];
    mergeSort(x,0,n-1);
    cout<<"Sorted array: ";
    for(int y:x) cout << y << " ";
    return 0;
}