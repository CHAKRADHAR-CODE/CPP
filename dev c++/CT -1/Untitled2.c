#include<stdio.h>
int r(int);
int main()
{
	int n;
	scanf("%d",&n);
	int rev=r(n);
	printf("Reverse Number = %d\n",rev);
	if(n==rev)
	{
		printf("PALINDROME");
	}
	else
	{
		printf("NOT A PALINDROME");
	}
	return 0;
}
int r(int n)
{   int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
} 
