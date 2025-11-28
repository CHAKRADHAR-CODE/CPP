#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int max = x[0];
	for (int i = 0;i<n;i++){
		if (x[i]>max){
			max = x[i];
		}
	}
		int min = x[0];
		for (int i = 0;i<n;i++){
		if (x[i]<min){
			min = x[i];
		}
	}
	
	printf("maximum value of array  : %d\n",max);
	printf("maximum value of array  : %d",min);
	return 0;
	
}