#include<stdio.h>
int main(){
	int i,n,c;
	scanf("%d",&n);
	int x[n];
	for (i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	scanf("%d",&c);
	for (i = 0;i<n;i++){
		if (i<=3){
		printf("%d ",x[i]);
		}
	}
return 0;
}