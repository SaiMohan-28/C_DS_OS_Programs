#include<stdio.h>
int rev(int n)
{
	int rem=0,sum=0;
	while(n)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter Number\n");
	scanf("%d",&n);
	int (*fp)(int);
	fp=rev;
	printf("Reverse=%d\n",fp(n));
	return 0;
}
