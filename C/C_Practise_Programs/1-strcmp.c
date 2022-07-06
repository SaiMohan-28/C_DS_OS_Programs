#include<stdio.h>
#define S 20
int cmp(char *a,char *b)
{
	int i=0;
	while(*a!=0 && *b!=0 && *a ==*b)
	{
		*a++;
		*b++;
	}
	if(*a==*b)
		return 1;
	else 
		return 2;
}
int main()
{
	char a[S],b[S];
	int (*fp)(char *,char *);
	printf("enter string:\n");
	scanf("%s%s",a,b);
	fp=cmp;
	if(fp(a,b)==1)
	printf("Same\n");
	else
	printf("Not Same\n");
	return 0;
}
