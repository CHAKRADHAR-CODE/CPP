#include<stdio.h>
#include<math.h>
int main(){
	int x,n,r;
	scanf("%d",&n);
	int d=(int)log10(n)+1;
	int s=0;
	while(n>0){
		r=x%10;
		s=s+(int)pow(r,d);
		x=n/10;
	}
	if (n==r){
		printf("%d is armstrong number",n);
	}
	else{
		printf("%d is not- armstrong number",n);
}
return s;
}

	
	
