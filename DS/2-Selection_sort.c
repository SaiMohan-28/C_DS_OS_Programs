#include<stdio.h>
int main()
{
	int len,arr[]={1,6,3,2,4},min,temp=0,j;
	len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len-1;i++)
	{
		min=i;
		for(j=i+1;j<len;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		if(min!=i)
		{
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	for(int i=0;i<len;i++)
	printf("%d ",arr[i]);
	return 0;
}
