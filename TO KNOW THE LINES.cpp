#include<stdio.h>
int main(){
	FILE *x;
	x=fopen("C:\\Users\\Lenovo\\Documents\\Downloads\\man.txt","r");
	if(x==NULL){
		printf("FILE NOT CONECYED");
		return 1;
	}
	int s=0,w=0,l=0;
	char ch;
	while(1){
		ch=fgetc(x);
		if(ch==EOF){
			break;
		}
		s++;
	if(ch==' '||ch=='\n'){
		w++;
	}
	if(ch=='\n'){
		l++;
	}
	}
	printf("character count = %d\nword count = %d\nline count = %d\n",s,w,l);
	fclose(x);
	return 0;
} 