#include<stdio.h>
void swap(int *c,int *d)
{
	*c=(*c)^(*d);
	*d=(*c)^(*d);
	*c=(*c)^(*d);
}
int main()
{
	int a,b;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&a,&b);
	void (*fp)(int *,int *);
	fp=swap;
	fp(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}

