#include<stdio.h>
int main(){
	int i,n,c;
	scanf("%d",&n);
	int x[n];
	for (i = 0;i<n;i++){
		scanf("%d",&x[i]);
	}
	scanf("%d",&c);
	int a=c-1;
	for (i = 0;i<n;i++){
		if (i!=a){
		printf("%d ",x[i]);
		}
		else if (i == c){
			continue;
		}
	}
return 0;
}