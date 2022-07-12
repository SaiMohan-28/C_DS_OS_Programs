#include<stdio.h>
int main()
{
	int n,n1,a,b,count=0;
	printf("Enter Numbers\n");
	scanf("%d%d",&n,&n1);	//10 0000 0000 0000 1010
	for(int i=0;i<32;i++)	//7  0000 0000 0000 0111
	{
		a=(n>>i)&1;	//	
		b=(n1>>i)&1;
		if(a^b==1)
		count++;
	}
	printf("Difference %d\n",count);
	return 0;
}
