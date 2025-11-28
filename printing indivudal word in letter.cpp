#include<stdio.h>
int main(){
	char y[10];
	int i;
	scanf("%s",y);
	for (i=0;y[i] != '\0';i++){
		printf("%c ",y[i]);
	}
	return 0;
}