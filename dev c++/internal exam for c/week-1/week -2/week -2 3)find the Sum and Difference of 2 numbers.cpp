//Program to find the Sum and Difference of 2 numbers.
#include<stdio.h>
int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  printf("Sum of %d and %d is: %d\n",x,y,x+y);
  if (x<y)
  {
  	printf("Difference between %d and %d is: %d\n",x,y,y-x);
  }
  else
  {
  printf("Difference between %d and %d is: %d\n",x,y,x-y);
}
  return 0;
}
/*
Sample Input:
20 10

Sample Output:
Sum of 20 and 10 is: 30
Difference between 20 and 10 is: 10
*/