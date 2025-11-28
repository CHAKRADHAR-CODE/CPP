#include<stdio.h>
int main(){
   int p,t,r;
   float i;
   
   // assign the values
   p=100000;
   t=22;
   r=2; 
   
   // formula of interet  
   i=(p*t*r)/100;
   
   // printing the values
   printf("principal amount = %d\n",p);
   printf("time in month = %d\n",t);
   printf("rate of interest = %d\n",r);
   printf("simple interest = %f",i);
   
   return 0;
}
