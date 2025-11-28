
#include<stdio.h>
int findfactors(int);
int main(){
	int n,i;
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf("factors of give number %d is : %d\n",n,fact_count);
	if (n%2!=0){
   	printf("the %d is prine number",n);
   }
   else {
   	printf("the %d is not a prine number",n);
   }
	return 0;
	
}
int findfactors(int m){
	int count=2,i;
	printf("1\n");
	for(i=2;i<=m/2;i++){
		if(m%i==0){
			printf("%d\n",i);
			count ++;
		    
		
		}
	}
return count;
}

