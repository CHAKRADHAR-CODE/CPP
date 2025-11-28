#include<stdio.h>
int main(){
	char str[30];
	int i;
	printf("Enter any string : ");
	gets(str);
	int sum = 0;
	for (i=0;str[i]!='\0';i++){
		if (str[i]>48 && str[i]<57){
			sum = sum+(str[i]-48);
		}
	}
	printf("%d",sum);
	return 0;
}