#include<stdio.h>
int main()
{
	int arr[]={3,5,2,4,1},temp;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	for(int i=0;i<len;i++)
	printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
