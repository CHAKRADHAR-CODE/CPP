#include<stdio.h>
int main(){
	int s,i,su=0,in=0;
	scanf("%d",&s);
	int arr[s];
	for(i=0;i<s;i++){
		scanf("%d",&arr[i]);
		if (i%2==0){
		su=su+arr[i];
		}
	}
printf("even = %d",su);
	
return 0;
}

