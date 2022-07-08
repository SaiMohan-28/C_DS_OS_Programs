#include<stdio.h>
#define size_of(dt) (char *)(&dt+1)-(char *)(&dt)


int main()
{
	int a;
	float b;
	double c;
	printf("a=%ld\nb=%ld\nc=%ld\n",size_of(a),size_of(b),size_of(c));
	return 0;
}
