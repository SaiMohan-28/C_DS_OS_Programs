#include<stdio.h>
int main()
{		//MSB	      LSB
	int a=1;//00  00  00  01
	char *p=(char *)&a;
	if(*p==1)//little endian= 01   00   00   00
		 //		  201  202  203  204
	printf("Little Enidan\n");
	else	
		//BIg Endian = 00   00   00   01
		//	       201  202  203  204	 
	printf("Big Endian\n");
	return 0;
}
