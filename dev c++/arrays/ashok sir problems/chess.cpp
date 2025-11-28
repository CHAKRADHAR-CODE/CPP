#include<stdio.h>
int main()
{
int X,Y,x,y,c= 0;
scanf("%d %d",&x,&y);
x=X;
y=Y;
while (x>1 && y > 1){
	c++;
	x--;
	y--;
}
x=X;
y=Y;
while (x>1 && y < 8){
	c++;
	x--;
	y++;
}
x=X;
y=Y;
while (x<8 && y > 1){
	c++;
	x++;
	y--;
}
x=X;
y=Y;
while (x<8 && y < 8){
	c++;
	x++;
	y++;
}
printf("%d",c);
return 0;
}