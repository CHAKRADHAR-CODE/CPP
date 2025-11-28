#include<stdio.h>
int main(){
	int x,a,b,c,d;
	scanf("%d",&x);
	a=x*x;
	b=a/10;
	c=a%10;
	d=b+c;
	if (x==d){
		printf("%d is neon number",x);
	}
	else {
		printf("%d is not neon number",x);
	}
return 0;
}
