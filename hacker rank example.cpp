#include<stdio.h>
int main(){
    int n,s=0,m=0;
    scanf("%d",&n);
    int x[n];
    for (int i = 0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for (int i = 1;i<n;i++){
        s=s+x[i];
    }
    for (int i = 0;i<n-1;i++){
        m=m+x[i];
    }
    printf("%d %d",m,s);
    return 0;
}
