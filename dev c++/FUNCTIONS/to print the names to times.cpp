#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char x[n][30];
	int i;
	for (i=0;i<n;i++){
		scanf("%s",x[i]);
	}
	printf("THE GIVE CITY NAMES ARE \n");
	for (i=0;i<n;i++){
	printf("%s\n",x[i]);
	}
	return 0;
}