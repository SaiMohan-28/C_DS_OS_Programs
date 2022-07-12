#include<stdio.h>
#define SIZE 10
void freq(int arr[],int len)//  1 2 3 4 -1 2 3
{
	for(int i=0;i<len;i++)
	{
		
			int count=1;
			for(int j=i+1;j<len;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
					arr[j]='*';
				}
			}
			printf("%d element's frequency is %d\n",arr[i],count);	
	}
}
int main()
{
	int arr[10],n;
	printf("Enter Number of Elements\n");
	scanf("%d",&n);
	printf("Enter Elements in Array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	void (*fp)(int[],int);
	fp=freq;
	fp(arr,n);
	return 0;
}
