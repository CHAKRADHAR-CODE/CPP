#include<stdio.h>
int main(){
	
	int temp;
	
	printf("enter the temperature : ");
	scanf("%d",&temp);
	
	if (temp<0){
		printf("you are in freezing  weather");
	}
	else if (temp>=0&&temp<10){
		printf("you are in very cold weather");
	}
	else if (temp>=10&&temp<20){
		printf("you are in cold weather");
	}
	else if (temp>=20&&temp<30){
		printf("you are in normal weather");
	}
	else if (temp>=30&&temp<40){
		printf("you are in hot weather");
	}
	else {
		printf("you are in very hot weather");
	}
return 0;
	
}
