#include<stdio.h>
#define TOGGLE(num,pos) (num ^(0x1<<pos))

int main()
{
	int pos,num;
	printf("Enter Number\nEnter Position\n");
	scanf("%d%d",&num,&pos);
	printf("%d\n",TOGGLE(num,pos));
	return 0;
}
