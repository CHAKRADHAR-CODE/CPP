#include<stdio.h>
int main(){
	int x;
	printf("enter which convertion you want \n");
	printf("1.Fahrenheit to celsius\n");
	printf("2.celsius to Fahrenheit\n");
	printf("Give any 1 or 2 number : ");
	scanf("%d",&x);
	switch(x){
		case 1:
			float f,c;
			printf("Enter Fahrenheit value :");
			scanf("%f",&f);
			c=(f*5.0/9.0)-32;
			printf("The celsius is : %.2f",c);
			break;
		case 2:
			float a,b;
			printf("Enter celsius value :");
			scanf("%f",&c);
			b=(c+32)*9.0/5.0;
			printf("The Fahrenheit is : %.2f",b);
			break;
		default:
			printf("INVALID NUMBER");
			break;
	}
	return 0;
}