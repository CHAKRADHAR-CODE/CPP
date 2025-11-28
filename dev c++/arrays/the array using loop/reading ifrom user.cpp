#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int mark[n];
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&mark[i]);
	}
	for (i=0;i<n;i++){
		printf("%d",mark[i]);
	}
	return 0;
}
