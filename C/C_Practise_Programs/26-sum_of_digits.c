#include<stdio.h>
int main()
{
	int n,rem,sum=0,temp=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("%d sum = %d\n",temp,sum);
	return 0;
}
