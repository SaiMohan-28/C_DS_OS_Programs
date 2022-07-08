#include<stdio.h>
#include<string.h>
#define S 10
int pal(char s[])
{
	int len=strlen(s);
	int i,j,temp,flag=0;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(s[i]==s[j])
		continue;
		else
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	char str[S];
	printf("Enter String\n");
	scanf("%s",str);
	int (*fp)(char[])=pal;
	if(fp(str)==0)
	printf("%s is Palindrome\n",str);
	else
	printf("%s is Not Palindrome\n",str);
	return 0;
}
