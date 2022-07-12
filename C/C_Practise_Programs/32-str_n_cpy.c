#include<stdio.h>
#define S 20
int my_strncpy(char s[],char s1[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		s[i]=s1[i];
	}
}
int main()
{
	char s[S],s1[S];
	int n;
	printf("Enter String\n");
	scanf("%[^\n]s",s1);
	printf("Enter Number of charcaters to be copied\n");
	scanf("%d",&n);
	my_strncpy(s,s1,n);
	printf("s=%s\n",s);
	return 0;
}
