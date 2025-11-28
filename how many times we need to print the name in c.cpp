#include<stdio.h>
int main(){
	char z[1000];
	int n;
	scanf("%[^\n]s",&z);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\n");
		printf("%s\n",z);
	}
	return 0;
}