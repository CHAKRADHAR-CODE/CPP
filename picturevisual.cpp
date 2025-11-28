//C:\Users\Lenovo\Documents\Downloads
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	f1=fopen("C:\\Users\\Lenovo\\Documents\\Downloads\\mis sesha.jpg","rb");
	f2=fopen("C:\\Users\\Lenovo\\Documents\\Downloads\\copy_temple_tree_MY_son.jpg","wb+");
	
	if(f1==NULL || f2==NULL)
	{
		printf("File Connection Failed");
		return 1;
	}
	char b[1024];
	unsigned int byteread;
	while(1)
	{
		byteread=fread(b,1,sizeof(b),f1);
		if(byteread==0)
			break;
		fwrite(b,1,sizeof(b),f2);
	}	
}