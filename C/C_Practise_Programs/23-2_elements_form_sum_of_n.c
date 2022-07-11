#include<stdio.h>
int main()
{
	int arr[]={1,2,4,8,7,9,3},n=0,len=0,flag=0;
	len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i]+arr[j]==n)
			{
				printf("%d+%d=%d\n",arr[i],arr[j],arr[i]+arr[j]);
				flag=1;
			}
		}
	}
	if(flag==0)
	printf("No Pair is Found\n");
	return 0;
}
