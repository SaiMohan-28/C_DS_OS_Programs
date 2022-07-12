#include<stdio.h>
#define S 10
void rev(int s[], int len)
{
	int i,j,temp;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	int arr[S],n;
	printf("Enter Number\n");
	scanf("%d",&n);
	printf("Enter Elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	void (*fp)(int[],int)=rev;
	fp(arr,n);
	printf("After Reverse\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
