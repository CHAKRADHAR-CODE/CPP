#include<stdio.h>
int main(){
int n,a,b;
printf("ENTER WHICH TABLE YOU WANT = ");
scanf("%d",&n);
printf("ENTER THE LAST NUMBER IN TABLE = ");
scanf("%d",&b);
int i = 0;
while(i<b) {
  a=n*i;
  printf("%d x %d = %d\n",n,i,a);
  i++;
}
return 0;
}

