#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int x[n];
	for (i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for (i = 0;i<n;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
	int temp =x[0];
	for (i = 0;i<n-1;i++){
		x[i]=x[i+1];
	}
	x[n-1]=temp;
	for (i=0;i<n;i++){
		printf("%d ",x[i]);
	}
return 0;
}