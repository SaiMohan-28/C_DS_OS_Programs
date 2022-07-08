#include<stdio.h>
#define SET(pos,num) (num|(0x1<<pos))

int main()
{
	int pos,num;
	printf("Enter Number\nEnter Position\n");
	scanf("%d%d",&num,&pos);
	printf("%d\n",SET(pos,num));
	return 0;
}
