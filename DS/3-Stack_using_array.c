#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void getmin();

static int stack[SIZE];
static int data,top=-1;
void push(int data)
{
	if(top==SIZE-1)
	printf("stack is full\n");
	else
	{
		top++;
		stack[top]=data;
	}
}
void pop()
{
	if(top==-1)
	printf("stack is empty\n");
	else
	{
		printf("popped element is %d\n",stack[top]);
		top--;
		getmin();
	}
}
void getmin()
{
	int min=stack[top],temp=top;
	if(temp==-1)
	printf("List is Empty\n");
	else
	{
		for(int i=0;i<=temp;i++)
		{	if(temp>0)
			{
				if(stack[temp]<min)
				min=stack[temp];
			}
				temp--;
		}
	}
	printf("min element is %d\n",min);
}
void display()
{
	if(top==-1)
	printf("stakc is empty\n");
	else
	{
		for(int i=top;i>=0;i--)
		{
			printf("element is %d\n",stack[i]);
		}
	}
}
int main()
{
	push(7);
	push(33);
	push(5);
	push(10);
	push(3);
	push(100);
	push(25);
	display();
	pop();
	pop();
	pop();
	return 0;
}
