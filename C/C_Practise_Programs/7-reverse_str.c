#include<stdio.h>
void rev(char ch[])
{
	int i=0,count=0,c=0,j=0;
	char b[10];
	while(ch[i]!='\0')
	{
		count++;
		i++;
	}
	c=count-1;
	for(int i=c;i>=0;i--)
	{
		b[j]=ch[i];
		j++;
	}
	b[j]='\0';
	printf("%s\n",b);
}
int main()
{
	char ch[10];
	printf("Enter String\n");
	scanf("%s",ch);
	void (*fp)(char[]);
	fp=rev;
	fp(ch);
	return 0;
}
