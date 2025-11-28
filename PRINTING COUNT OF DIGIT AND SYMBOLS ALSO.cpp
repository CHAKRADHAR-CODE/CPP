#include<stdio.h>
int main(){
	char y[20];
	int i,a=0,b=0,c=0,d=0;
	scanf("%s",y);
	for (i=0;y[i] != '\0';i++){
		if (y[i]>='A' && y[i]<='Z'){
		   a++;
		}
		else if (y[i]>='a' && y[i]<='z'){
			b++;
		}
		else if (y[i]>='0' && y[i]<='9'){
			c++;
		}
		else {
			d++;
		}
		
	}
	printf("NUMBER OF UPPER CASE LETTERS = %d\n",a);
	printf("NUMBER OF LOWER CASE LETTERS = %d\n",b);
	printf("NUMBER OF DIGIT = %d\n",c);
	printf("NUMBER OF SYMBOLS = %d",d);
	return 0;
}