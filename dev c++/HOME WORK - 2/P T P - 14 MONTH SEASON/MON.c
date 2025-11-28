#include<stdio.h>
int main()
{
	int sea;
	
	printf("enter month number : ");
	scanf("%d",&sea);
	
	if (sea==3||sea==4||sea==5){
		printf("season is summer");
	}
	else if (sea==6||sea==7||sea==8||sea==9){
		printf("season is rainy");
	}
	else if (sea==10||sea==11||sea==12||sea==1||sea==2){
		printf("season is winter");
	}
	else {
		printf("no month");
	}
return 0;
}
