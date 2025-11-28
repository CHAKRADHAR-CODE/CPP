#include<stdio.h>
int main(){
    int x[4];
    for (int i=0;i<4;i++){
        scanf("%d",&x[i]);
    }
    int c=0,z;
    scanf("%d",&z);
    for (int i=0;i<4;i++){
        if (x[i]==z){
            printf("%d",i);
            break;
		}
		else{
			c++;
		}
        
    }
    if (c==4){
    	printf("-1");
	}
    return 0;
}