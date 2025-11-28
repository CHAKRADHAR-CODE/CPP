#include<stdio.h>
void dm(int r,int c,int[r][c]);
void matrixTranspose(int r,int c,int[r][c]);
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int M[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&M[i][j]);
		}
	}
	printf("Before Matrix Transpose is \n");
	dm(r,c,M);
	matrixTranspose(r,c,M);
	
}
void dm(int r,int c,int M[r][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",M[i][j]);
		}
		printf("\n");
	}
}
void matrixTranspose(int r,int c,int M[r][c])
{
	int MT[c][r];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
		
			MT[j][i]=M[i][j];		
		}
	}
	printf("The Matrix Transpose is \n");
	dm(r,c,MT);
}