#include <stdio.h>
#include <math.h>
int main(){
	int x,n,i,s=1;
    scanf("%d%d",&x,&n);
    for (i=1;i<=n;i++){
    	s=s+(int)pow(x,i);
}
	printf("%d",s);
	return 0;
}

