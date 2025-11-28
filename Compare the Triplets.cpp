#include<stdio.h>
int main(){
    int x[3],y[3];
    
    for (int i = 0;i<3;i++){
        scanf("%d",&x[i]);
    }
    for (int i = 0;i<3;i++){
        scanf("%d",&y[i]);
    }
    int a=0,b=0;
	if (x[0]>y[0] || x[1]>y[1] || x[2]>y[2]){
    	a++;
	}
	else if (x[0]<y[0] || x[1]<y[1] || x[2]<y[2]){
    	b++;
	}
	else if (x[0]==y[0] || x[1]==y[1] || x[2]==y[2]){
    	
	}
	
	printf("%d %d",a,b);
    return 0;
    
}