	#include<stdio.h>
int main(){
int i,j,a,b;
scanf("%d %d",&a,&b);
printf("enter 1 matrix elements %d \n",a*b);
int x[a][b];
int y[a][b];
int z[a][b];
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&x[i][j]);
	}
}
printf("enter 2 matrix elements %d \n",a*b);
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		scanf("%d",&y[i][j]);
	}
}
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		z[i][j]=x[i][j]+y[i][j];
	}
}
printf(">>> z matrix : \n");
for (i=0;i<a;i++){
	for (j=0;j<b;j++){
		printf("%d ",z[i][j]);
	}
	printf("\n");
}
return 0;
} 