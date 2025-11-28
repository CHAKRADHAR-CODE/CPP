#include<stdio.h>
int main(){
    FILE *x,*y;
    x = fopen("D:\\text files\\coping.txt","r");
    y = fopen("D:\\text files\\coping 2.txt","w+");
	if(x == NULL){
        printf("FILE NOT CONNECTED\n");  
        return 1;
    }
    char ch;
    while(1){
    	ch=fgetc(x);
        if(ch == EOF){
            break;
        }
        fputc(ch, y);
    }
    printf("ANNA FILE COPY IEPOENDHE\n");
    fclose(x);
    fclose(y);
    return 0;
}