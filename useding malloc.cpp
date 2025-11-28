#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr =(int *)malloc(sizeof(int));
	printf("Adress of ptr = %u\n",ptr);
	*ptr = 30;
	printf("Value at ptr = %d",*ptr);
	free(ptr);
	return 0;
}