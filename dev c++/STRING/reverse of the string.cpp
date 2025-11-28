#include<stdio.h>
#include<string.h>
int main(){
	int i,j=0;
	char x[100];
	char y[100];
	gets(x);
    int m = strlen(x);
	for (i=m-1;i>=0;i--){
		y[j]=x[i];
		j++;
	}
	y[j]='\0';
	printf("given string: %s\n",x);
    printf("reverse string: %s\n",y);
    return 0;
}