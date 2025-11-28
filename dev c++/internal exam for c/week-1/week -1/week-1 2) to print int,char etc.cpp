/*Write a simple program to read int, float, char 
and string using scanf() and display using 
 printf() in all the above given platforms.*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	char ch;
	float m;
	char str[20];
	scanf("%d",&n);
	fflush(stdin);
	scanf("%c%f%s",&ch,&m,str);
	printf("n = %d\n",n);
	printf("ch = %c\n",ch);
	printf("m = %f\n",m);
	printf("str = %s\n",str);
	return 0;
}
/*Sample Input:
3581
M
56000
Srinu

Sample Output:
n = 3581
ch = M
m = 56000.000000
str = Srinu
*/
