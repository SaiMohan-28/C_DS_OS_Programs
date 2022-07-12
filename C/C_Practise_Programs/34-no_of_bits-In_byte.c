#include<stdio.h>
int main()
{
	int n,temp,count=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	temp=n;
	for (int i=1;i<=8;i++)
	{
		if((temp & 1)==1)		
		{ 				        
			count++;		  	
		}
		temp=temp>>i;
		printf("%d\n",temp);
	}
	printf("%d no of 1's in %d\n",count,n);
	return 0;
}
