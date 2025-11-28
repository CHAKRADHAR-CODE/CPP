#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	switch (x){
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
	 	case 3:
			printf("three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 6:
			printf("six\n");
			break;
		case 7:
			printf("seven\n");
			break;
		case 8:
			printf("eight\n");
			break;
		case 9:
			printf("NiNe\n");
			break;
		default :
			printf("we dont have that number\n");
			break;
	}
	return 0;
}