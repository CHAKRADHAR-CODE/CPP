#include<stdio.h>
int main(){
	int i;
	char x[10];
	char y[10];
	gets(x);
	for (i=0;x[i]!='\0';i++){
		y[i]=x[i];
	}
	y[i]='\0';
	printf("given string: %s\n",x);
    printf("copied string: %s\n",y);
    return 0;
}