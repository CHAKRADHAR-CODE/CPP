#include<stdio.h>
int a,b;
int x(int a,int b){
	printf("=> give the values for '+' :");
	scanf("%d %d",&a,&b);
	return a+b;
}
int y(int a,int b){
	printf("=> give the values for '-' :");
	scanf("%d %d",&a,&b);
	return a-b;
}
int z(int a,int b){
	printf("=> give the values for 'x' :");
	scanf("%d %d",&a,&b);
	return a*b;
}
int g(int a,int b){
	printf("=> give the values for '/' :");
	scanf("%d %d",&a,&b);
	return a/b;
}
int main(){
	int c=x(a,b);
	printf("  sum of to number :%d\n",c);
	int d=y(a,b);
	printf("  subtract of to number :%d\n",d);
	int e=z(a,b);
	printf("  multiply of to number :%d\n",e);
	int f=g(a,b);
	printf("  multiply of to number :%d\n",f);
	return 0;
}