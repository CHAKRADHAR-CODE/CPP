#include<stdio.h>
int main(){
	int mark[6]={89,58,47,65,32,55};
	int i,sum;
	for (i=0;i<6;i++){
		sum = sum +mark[i];
		printf("%d\n",sum);
	}
	return 0;
}
