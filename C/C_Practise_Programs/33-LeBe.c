#include<stdio.h>
int main()
{					//MSB	      LSB				
	int a=0x98765432;		//98  76  54  32
	char *p=(char *)&a;
	if(*p==0x32)			//little endian=  32  54   76   98
		 			//		  201  202  203  204
	printf("Little Enidan\n");
	else	
					//BIg Endian = 98   76   54   32
					//	       201  202  203  204	 
	printf("Big Endian\n");
	printf("%p\n",p);
	printf("%d\n",*p);
	
	
	
	return 0;
}
