#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int min = x[0];
	for (int i = 0;i<n;i++){
		if (x[i]<min){
			min = x[i];
		}
	}
	printf("minum value of array %d",min);
	return 0;
	
}