#include<stdio.h>
int main(){
	int p,t,r;
	float i ;
	
	printf(" enter principle, time and rate of interest=");
	scanf("%d%d%d",&p,&t,&r);
	
	i=(p*t*r)/100;
	printf("p = %d t = %d r=%d\n",p,t,r);
    printf("simple interest = %f",i);
	
	return 0;
}0
