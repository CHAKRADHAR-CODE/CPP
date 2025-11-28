#include<stdio.h>
int main()
{
	int i,n,factorcount=0;
	printf("enter the number");
	scanf("%d",&n);
	for (i=1;i<=
	n;i++);
	{
		if(n%i==0)
		factorcount++;
		}
		if(factorcount==2){
			printf("%d is a prime",n);
		}else {
			printf("%d is not a prime",n);
		}
	
}
