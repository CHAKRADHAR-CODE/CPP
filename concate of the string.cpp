#include<stdio.h>
int main()
{
	int j=0;
	char x[100];
	char y[100];
	char z[100];
	gets(x);
	gets(y);
	for(int i=0;x[i] != '\0';i++){
		z[j]=x[i];
		j++;
	}
	z[j]=' ';
	j++;
	for(int i=0;y[i] != '\0';i++){
		z[j]=y[i];
		j++;
	}
	z[j]='\0';
	printf("string : %s",z);
	return 0;
}