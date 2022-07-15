#include<stdio.h>

enum temp
{
	room=27,
	body_temp=97,
	hall=27,
};

enum place
{
	//room,
	hyd,
	bang,
	chen=10,
	pune,
	goa,
	mum,
	//hyd,
};

int main()
{
	printf("%d %d %d\n",room,body_temp,hall);
	printf("%d %d %d %d %d %d %d %d \n",hyd,bang,chen,pune,goa,mum,hyd,room);
	printf("%d %d %d %d %d %d %d %d \n",hyd,bang,chen,pune,goa,hyd,mum,room);
	return 0;
}
