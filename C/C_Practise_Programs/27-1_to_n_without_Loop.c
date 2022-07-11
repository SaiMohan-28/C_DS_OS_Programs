#include<stdio.h>
void print(int i,int n)
{
	if(i>n)
	return;
	else
	{
		printf("%d\n",i);
		print(++i,n);
	}
}
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	int i=1;
	print(i,n);
	return 0;
}
