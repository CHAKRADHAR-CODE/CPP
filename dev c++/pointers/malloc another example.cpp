#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum=0,i;
	scanf("%d",&n);
	int *ptr =(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++){
		printf("%d ",*(ptr+i));
		sum = sum+*(ptr+i);
	}
	printf("\n Sum of elements = %d",sum);
	return 0;
}