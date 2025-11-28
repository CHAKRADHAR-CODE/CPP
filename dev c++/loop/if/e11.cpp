#include <stdio.h>
int main(){
	int n;
	printf("Enter how many times i need to print :");
	scanf("%d",&n);
	for (int i=0;i<=n;i++){
		if(i%2!=0){
		
		printf("%d\n",i);
		}
	}
return 0;
}
