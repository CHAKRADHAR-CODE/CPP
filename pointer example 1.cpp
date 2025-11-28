#include<stdio.h>
int main(){
	int *ptr;
	int x=5;
	ptr =&x;
	printf("%d",*ptr);
	*ptr = 10;
	printf("%d",x);
}