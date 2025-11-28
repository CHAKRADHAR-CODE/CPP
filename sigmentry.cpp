#include<bits/stdc++.h>
using namespace std;
class SegmentTree{
    private:
        vector<int>SegTree;
    public:
        SegmentTree(int n){
            SegTree.resize(4*n);
        }
    void BuildsegTree(int Index,int start,int end,vector<int>&A){
        if(start == end){
            SegTree[Index] = A[start];
        }
        int mid = (start + end)/2
    }
}