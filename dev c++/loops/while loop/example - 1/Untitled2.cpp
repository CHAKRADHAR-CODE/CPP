#include<stdio.h>
int main(){
int i,a;
printf("Enter A table you need = ");
scanf("%d",&i);
int n=0;
while(n<=12){
	a=i*n;
	printf("%dx%d=%d\n",i,n,a);
	n++;
}
return 0;
}


