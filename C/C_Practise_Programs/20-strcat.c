#include<stdio.h>
void my_strcat(char s[],char s1[])
{
	int i=0,j=0,count=0;
	while(s[i]!='\0')
	{
		i++;
	}
	while(s1[j]!='\0')
	{
		s[i]=s1[j];
		i++;
		j++;
	}
	//s1[j]='\0';
	
}
int main()
{
	char s[20],s1[20];
	printf("Enter String\n");
	scanf("%s",s);
	printf("Enter String\n");
	scanf("%s",s1);
	my_strcat(s,s1);
	printf("%s\n%s\n",s,s1);
	return 0;
	
	
}
