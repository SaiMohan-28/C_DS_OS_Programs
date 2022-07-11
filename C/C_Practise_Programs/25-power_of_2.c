#include<stdio.h>
int main()
{
	int n,count=0,temp;
	printf("Enter Number\n");
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		n=(n&(n-1));
		count++;
	}
	if(count==1)
	printf("%d is Power of 2\n",temp);
	else
	printf("%d is Not Power of 2\n",temp);
	return 0;
}
