#include<stdio.h>
void dm(int r,int c,int[r][c]);
int ft(int r,int c,int[r][c]);
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int temp[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&temp[i][j]);
		}
	}
	dm(r,c,temp);
	int res=ft(r,c,temp);
	printf("The hottest temperature is :%d\n",res);
}
void dm(int r,int c,int temp[r][c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",temp[i][j]);
		}
		printf("\n");
	}
}
int ft(int r,int c,int temp[r][c])
{
	int t=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(temp[i][j]>t)
			{
				t=temp[i][j];
			}
		}
	}
	return t;
}