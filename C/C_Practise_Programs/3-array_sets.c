#include<stdio.h>
void set(int a[],int l)
{
	int count=0;
	for(int i=0;i<l;i++)
	{
		for(int j=i+1;j<=l;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d\n",count);
}
int main()
{
	int a[]={1,2,2,3,1,4,4};
	int len=sizeof(a)/sizeof(a[0]);
	void (*fp)(int[],int)=set;
	fp(a,len);
	return 0;
}
