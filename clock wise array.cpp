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
	int temp =x[n-1];
	for (i = n-1;i>=1;i--){
		x[i]=x[i-1];
	}
	x[0]=temp;
	for (i=0;i<n;i++){
		printf("%d ",x[i]);
	}
return 0;
}