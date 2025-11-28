#include<stdio.h>
int main(){
	char y[10];
	int i,a=0;
	scanf("%s",y);
	for (i=0;y[i] != '\0';i++){
		if (y[i]=='A' || y[i] == 'a'|| y[i]=='E' || y[i] == 'e' ||y[i]=='I' || y[i] == 'i' ||y[i]=='O' || y[i] == 'o' ||y[i]=='U' || y[i] == 'u' ){
		   a++;
		}
}
printf("%d",a);
return 0;
}
