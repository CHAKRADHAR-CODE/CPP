#include<stdio.h>
int main(){
	int *ptr,*q;
	int x=5;
	ptr =&x;
	q=ptr;
	printf("%d %d\n",ptr,q);
	printf("%d %d",*ptr,*q);
}