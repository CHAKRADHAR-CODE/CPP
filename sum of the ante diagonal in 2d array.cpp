#include<stdio.h>
int main(){
int i,j,a,b;
scanf("%d %d",&a,&b);
printf("enter %d elemnts \n",a*b);
int c[a][b];
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&c[i][j]);
	}
}
printf("\n");
int  s  = 0;
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		if (i+j==a-1){
		s += c[i][j];	
		} 
		printf("%d ",c[i][j]);
	}
	printf("\n");
}
printf("sum of the elements = %d\n",s);
return 0;
} 