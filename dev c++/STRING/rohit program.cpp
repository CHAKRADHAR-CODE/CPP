#include<stdio.h>
int main()
{
    int j=0,i;
	char str[100];
	gets(str);
	char word[20];
    for(i=0;str[i]!='\0';i++);
    {
    	if(str[i]!=' ')
    	{
    		word[j]=str[i];
    		j++;
		}
		else
		{
			word[j]='\0';
			printf("%s\n",word);
			j=0;
		}
	}
	word[j]='\0';
	printf("%s",word);
    return 0;
}