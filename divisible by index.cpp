#include<stdio.h>
int main(){
int n,b;
scanf("%d",&n);
int x[n];
for (int i=0;i<n;i++){
	scanf("%d",&x[i]);
}
int c=0;
for (int i=1;i<n;i++){
	if (x[i]%i == 0){
		c++;}
}
printf("%d",c);
return  0;
}