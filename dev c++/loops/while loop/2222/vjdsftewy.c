#include<stdio.h>
int main(){
	int a,b,d,i;
	printf("ENTER WHICH TABLE YOU WHANT = ");
	scanf("%d",&b);
	printf("ENTER HOW MANY STEPS YOU WANT = ");
	scanf("%d",&a);
	while(i<=a){
	d=b*i;
	printf("%d x %d = %d\n",b,i,d);
	i++;
	}

return 0;
}
