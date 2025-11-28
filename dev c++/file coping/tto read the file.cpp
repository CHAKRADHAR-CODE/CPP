#include<stdio.h>
int main(){
	FILE *x;
	x=fopen("C:\\Users\\Lenovo\\Documents\\Downloads\\man.txt","r");
	if(x==NULL){
		printf("FILE NOT CONECYED");
		return 1;
	}
	char ch;
	while(1){
		ch=fgetc(x);
		if(ch==EOF){
			break;
		}
		printf("%c",ch);
	}
	fclose(x);
	return 0;
}