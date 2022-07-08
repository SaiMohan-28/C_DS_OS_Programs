#include<stdio.h>
#define S 20

void my_cpy(char des[],char source[])
{
	int i=0; 
	for(i=0;source[i]!='\0';i++)
	{
		des[i]=source[i];
	}
	//des[i]='\0';
}
int main()
{
	char source[S]={'\0'},des[S]={'\0'};
	printf("Enter String\n");
	scanf("%s",source);
	printf("Before Copy:\nsource=%s\ndes=%s\n",source,des);
	my_cpy(des,source);
	printf("After Copy:\nsource=%s\ndes=%s\n",source,des);
	return 0;
}
