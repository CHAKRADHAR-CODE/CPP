#include<stdio.h>
int main(){
	char y[10];
	int i,a=0,b=0;
	scanf("%s",y);
	for (i=0;y[i] != '\0';i++){
		if (y[i]>='A' && y[i]<='Z'){
		   a++;
		}
		else if (y[i]>='a' && y[i]<='z'){
			b++;
		}
	}
	printf("NUMBER OF UPPER CASE LETTERS = %d\n",a);
	printf("NUMBER OF LOWER CASE LETTERS = %d",b);
	return 0;
}