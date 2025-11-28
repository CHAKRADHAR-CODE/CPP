#include <stdio.h>
int main(){
	int n,i,s=1;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
    	s=s*i;
}
	printf("%d",s);
	return 0;
}
