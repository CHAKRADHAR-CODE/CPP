#include<stdio.h>
int main(){
int n,b;
scanf("%d",&n);
int x[n];
for (int i=0;i<n;i++){
	scanf("%d",&x[i]);
}
for (int i=0;i<n;i++){
	if (x[i]%2 != 0){
		b = 1;
		break;
	}
	
	
}
if (b == 1){
	printf("array is not even");
}
else {
	printf("array is are  even");
}
return  0;
}