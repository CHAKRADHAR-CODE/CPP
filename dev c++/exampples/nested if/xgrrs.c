#include<stdio.h>
int main(){
	int i,j;
	for (i=1;i<5;i++){
		for(j=1;j<=6-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
printf("1\n2 3\n4 5 6\n7 8 9 10\n11 12 12 14");
}

