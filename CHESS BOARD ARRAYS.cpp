#include<stdio.h>
int main(){
int i,j;
char c[8][8]={{'B','W','B','W','B','W','B','W'},{'W','B','W','B','W','B','W','B'},
 				{'B','W','B','W','B','W','B','W'},{'W','B','W','B','W','B','W','B'},
				{'B','W','B','W','B','W','B','W'},{'W','B','W','B','W','B','W','B'},
				{'B','W','B','W','B','W','B','W'},{'W','B','W','B','W','B','W','B'}};

for (i=0;i<8;i++){
	for (j=0;j<8;j++){
		printf("%C ",c[i][j]);
	}
	printf("\n");
}
return 0;
}