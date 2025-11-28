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
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		if (i<=j){
			printf("%d ",c[i][j]);
		}
		else{
			printf("  ");
		}
	}
	printf("\n");
}
return 0;
} 