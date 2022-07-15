#include<stdio.h>


enum state {working,failed,freezed};
enum state currstate=2;

enum state findstate()
{
	return currstate;
}

int main()
{
	(findstate()==freezed)?printf("freezed\n"):printf("not freezed\n");
	return 0;
}
