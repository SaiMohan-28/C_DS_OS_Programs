#include<stdio.h>
void bin(int n)
{
	int i=0,rem[5];
	for(i=0;n>0;i++)
	{
		rem[i]=n%2;
		n=n/2;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",rem[j]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	void (*fp)(int);
	fp=bin;
	fp(n);
	return 0;
}
