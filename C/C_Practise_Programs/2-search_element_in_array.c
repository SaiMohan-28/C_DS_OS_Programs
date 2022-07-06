#include<stdio.h>
#define S 10
int search(int *a,int n)
{
	for(int i=0;a[i]<S;i++)
	{
		if(a[i]==n)
		{
			return 1;
			break;
		}
	}
return 0;
}
int main()
{
	int a[S],n;
	printf("enter elements\n");
	for(int i=0;i<S;i++)
	{
		scanf("%d",&a[i]);
	}
	int (*fp)(int*,int);
	printf("element to search\n");
	scanf("%d",&n);
	fp=search;
	if((fp)(a,n)==1)
	printf("found\n");
	else 
	printf("not found\n");
	return 0;
}
