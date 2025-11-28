#include<stdio.h>
int main(){
int n,m,c,f;
scanf("%d",&n);
int x[n];
for (int i=0;i<n;i++){
	scanf("%d",&x[i]);
}
scanf("%d",&m);
for (int i=0;i<n;i++){
	if (x[i]==m){
		c = 1;
		break;	
	}
}
if (c == 1){
	printf("yes located in %d",c);
}
else if (c != 1){
	printf("no");
}
return  0;
}