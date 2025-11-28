#include<stdio.h>

int main(){
    FILE *x,*y;
    x = fopen("D:\\text files\\ROHIT_WEDS_CSE.txt", "w+");
    y = fopen("D:\\text files\\ROHIT_WEDS_CSE.txt", "r");
    if(x == NULL){
        printf("FILE NOT CONNECTED\n");  // Corrected the spelling of "CONNECTED"
        return 1;
    }

    char ch;
    while(1){
        scanf("%c", &ch);
        if(ch == '+'){
            break;
        }
        fputc(ch, x);
    }
    char m;
	while(1){
		m=fgetc(x);
		if(m==EOF){
			break;
		}
		printf("%c",m);
	}
	fclose(x);
	fclose(y);
    return 0;
}
