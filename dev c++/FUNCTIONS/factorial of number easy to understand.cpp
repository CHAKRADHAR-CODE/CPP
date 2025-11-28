#include<stdio.h>
int fact(int);
int main()
{
	int x,pro;
	scanf("%d",&x);
	pro=fact(x);
	printf("%d is %d",x,pro);
	return 0;
}
int fact(int x)
{
	int pro=1,i;
	for(i=1;i<=x;i++)
	{
		pro=pro*i;
	}
	return pro;
}