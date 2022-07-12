#include<stdio.h>
#define S 20
int my_strncmp(char s[],char s1[],int n)
{
	while(s[n] && s1[n] && s[n]==s1[n])
	{
		n--;
	}
	if(s[n]==s1[n])
	return 0;
	else
	return s[n]-s1[n];
}
int main()
{
	char s[S],s1[S];
	int n;
	printf("Enter Strings\n");
	scanf("%s%s",s,s1);
	printf("Enter Number of charcaters to be compared\n");
	scanf("%d",&n);
	if(my_strncmp(s,s1,n)==0)
	printf("Strings are Same\n");
	else
	printf("Strings are Not Same\n");
	return 0;
}
