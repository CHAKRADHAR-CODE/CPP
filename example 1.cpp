#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("Enter any two positive numbers :\n");
	scanf("%d %d",&a,&b);
	printf("Before swaping numbers are : ");
	printf("%d %d\n",a,b);
	swap(&a,&b);
	printf("After swaping numbers are : ");
	printf("%d %d\n",a,b);
}
