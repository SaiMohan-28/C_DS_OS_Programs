#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	
	int temp=len/2;
	printf("Middle element is %d \n",arr[temp]);
	int size = *(&arr+1)-arr;
	printf("%d\n",size);
	return 0;
}
