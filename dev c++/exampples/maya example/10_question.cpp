#include<stdio.h>
int main(){
	int x,y,a,b,z;
	scanf("%d %d",&a,&b);
	if (a*b==b){
		x=a+b;
		y=a*b;
		z=x-y;
	}
	else{
		x=a+b;
		y=a*b;
		z=y-x;
	}
	printf("%d",z);
	return 0;
}
