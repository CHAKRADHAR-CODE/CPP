#include<stdio.h>
#include<stdio.h>
int prime_numbers(int);
int main()
{
	int i,x,y;
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		int fact_count=prime_number(i);
		if(fact_count==2)
		printf("%d ",i);
	}
	return 0;
}
int prime_number(int m)
{
	int count=2,i;
	for(i=2;i<=m/2;i++)
	{
		if(m%i==0)
		{
			count++;
		}
	}
	return count;
}
