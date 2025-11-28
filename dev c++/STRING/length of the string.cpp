#include<stdio.h>
int main(){
	char y[10];
	int i,a=0;
	scanf("%s",y);
	for (i=0;y[i] != '\0';i++){
		a++;
	}
	printf("%d",a);
	return 0;
}