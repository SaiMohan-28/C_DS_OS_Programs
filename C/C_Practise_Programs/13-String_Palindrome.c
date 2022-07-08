#include<stdio.h>
#include<string.h>
#define S 10
void rev(char s[])
{
	int len=strlen(s);
	int i,j,temp;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	char str[S];
	printf("Enter String\n");
	scanf("%s",str);
	void (*fp)(char[])=rev;
	fp(str);
	printf("After Reverse\n");
	printf("%s\n",str);
	return 0;
}
