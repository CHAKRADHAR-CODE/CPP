#include<stdio.h>
int main(){
	float salary,hra,da,grs;
	print("Enter your scalary :");
	scanf("%f",&salary);
	if (salary<=10000){
		hra = salary*0.2;
		da = salary*0.8;
	}
	else if(salary<=20000){
		hra = salary*0.25;
		da = salary*0.9;
	}
	else if(salary>20000){
		hra = salary*0.3;
		da = salary*0.95;
	}
	grs=salary+hra+da;
	printf("grs = %.2f/n",grs);
	return 0;
}
