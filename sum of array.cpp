#include<stdio.h>
int main(){
	int sum, n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for (int i = 0;i<n;i++){
	sum += x[i];
	}
	printf("%d\n",sum);
	return 0; 	
}