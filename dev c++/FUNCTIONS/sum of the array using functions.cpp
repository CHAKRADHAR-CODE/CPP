#include<stdio.h>
int a(int[],int);
int main(){
	int n,i,sum;
	scanf("%d",&n);
	int x[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",& x[i]);
	}
	int z=a(x,n);
	printf("result : %d\n",z);
	return 0;
}
int a(int m[],int size)
{
	int sum = 0,i;
	for (i=0;i<size;i++)
	{
		sum +=m[i];
	}
	return sum;
}