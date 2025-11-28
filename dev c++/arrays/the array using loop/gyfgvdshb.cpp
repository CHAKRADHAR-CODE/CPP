#include<stdio.h>
int main(){
	int s,i,su=0,in=0;
	scanf("%d",&s);
	int arr[s];
	for(i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<s;i++){
		if (arr[i]%2==0){
			su=su+arr[i];
		}
		else{
			in=in+arr[i];
		}
	}
	printf("even = %d",su);
	printf("odd = %d",in);
return 0;
}
