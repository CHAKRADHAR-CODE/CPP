#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int x[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	int a=0;
	for (int i = 0;i<n;i++){
		if (x[i]%10 == i){
			a++;
		}
	}
	printf("count %d",a);
	return 0;
	
}