#include<stdio.h>
int main(){
	int i,j=0;
	char x[100];
	gets(x);
	char w[20];
	for (i=0;x[i]!='\0';i++){
		if (x[i]!=' '){
			
			w[j]=x[i];
			j++;
			 
		}
		else {
			w[j]='\0';
			printf("%s %d\n",w,j);
			j=0;
			 
		}
	}
	w[j]='\0';
	printf("%s %d\n",w,j);
	return 0;
}
