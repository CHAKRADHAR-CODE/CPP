#include<stdio.h>
int main(){
	printf(">>> TO FIND THE PERIMETER OF RECTANGLE \n");
	float length,breadth,perimeter;

	printf("LENGTH OF THE RECTANGLE =");
	scanf("%f",&length);
	     
	printf("BREADTH OF THE RECTANGLE =");
	scanf("%f",&breadth);
	     
	// formula to find perimeter of a rectangle
	perimeter= 2*(length+breadth);
	
	printf("PERIMETER OF RECTANGLE  = %f",perimeter);
	
	return 0;
	
	
}

