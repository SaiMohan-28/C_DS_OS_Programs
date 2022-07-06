#include<stdio.h>
#define S 10
int rev(int s)
int main()
{
	int arr[S],n;
	printf("Enter Number\n");
	scanf("%d",&n);
	printf("Enter Elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr);
	}
	int (*fp)(int *,int)=rev;
	fp(&arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
