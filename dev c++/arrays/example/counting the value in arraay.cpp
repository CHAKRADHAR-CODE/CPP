#include<stdio.h>
int main(){
int n,m;
scanf("%d",&n);
int x[n];
for (int i=0;i<n;i++){
	scanf("%d",&x[i]);
}
scanf("%d",&m);
int c = 0;
for (int i=0;i<n;i++){
	if (x[i]==m){
		c++;
			
	}
}
printf("%d",c);
return  0;
}