#include <stdio.h>
int main(){
   int x;
   scanf("%d",&x);
   if (x>=0&&x<=2){
   	printf("INFANT");
   }
   else if (x>=3&&x<=12){
   	printf("child");
   	
   }
   else if (x>=13&&x<=19){
   	printf("TEEN");
   }
   else if (x>=20&&x<=64){
   	printf("Adult");
   }
   else if (x>=65){
   	printf("Senior");
   }
  return 0;
}

