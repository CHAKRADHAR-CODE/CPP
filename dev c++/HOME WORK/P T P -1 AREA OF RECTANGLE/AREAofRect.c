#include<stdio.h>
int main(){
	printf(">>> TO FIND THE AREA OF RECTANGLE ");
	float L,B,area;
	printf("LENGTH OF THE RECTANGLE = %f\n");
	scant("%f",&L);
	printf("BREADTH OF THE RECTANGLE = %f\n");
	scant("%f",&B);
	// formula of rectangle
	area=L*B;
	printf("AREA OF RECTANGLE OF THE RECTANGLE = %f",area);
	return 0;
}
	
