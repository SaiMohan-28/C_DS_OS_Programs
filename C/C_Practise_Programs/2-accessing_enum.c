#include<stdio.h>

enum week
{
	sun=10,
	mon,
	tue,
	wed,
	thur,
	fri,
	sat,
};

int main()
{
	int i;
	for(i=sun;i<=sat;i++)
	{
		printf("%d\n",i);
	}	
	return 0;
}
