#include<stdio.h>
int my_atoi(char  s[])
{
	int a=0;
	for(int i=0;s[i]!='\0';i++)
	{
		a=a*10+s[i]-48;
	}
	return a;
}
int isnumeric(char s[])
{
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48 && s[i]<=56)
		continue;
		else
		return 1;
	}
	return 0;
}
int main()
{
	char s[10];
	int temp;
	printf("Enter String\n");
	scanf("%s",s);
	if(isnumeric(s)==0)
	{
	temp=my_atoi(s);
	
	printf("%d\n",temp);
	}
	else
	printf("Cant convert to integer it contains characters \n");
	return 0;
}
