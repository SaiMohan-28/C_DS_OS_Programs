#include<stdio.h>

enum place
{
	hyderabad,
	mumbai,
};
typedef enum climate
{
	rainy,
	summer,
	winter,
	monsoon,
}cl;

int main()
{
	printf("%ld\n",sizeof(enum place));
	printf("%ld\n",sizeof(cl));
	cl c=monsoon;
	printf("%d\n",c);
	return 0;
}
