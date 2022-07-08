#include<stdio.h>
#define CLEAR(pos,num) (num &(~(0x1<<pos)))

int main()
{
	int pos,num;
	printf("Enter Number\nEnter Position\n");
	scanf("%d%d",&num,&pos);
	printf("%d\n",CLEAR(pos,num));
	return 0;
}
