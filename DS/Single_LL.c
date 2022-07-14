#include<stdio.h>
#include<stdlib.h>
typedef struct LL
{ 
	int data;
	struct LL *next;
}ll;
void create(ll **,ll **);
void insert_at_a_node(ll **);
void insert_before_node(ll **);
void insert_after_node(ll **);
void delete_head();
void delete_particular_node();
void delete_last_node();
void reverse();
void middle_element();
void loop();
void maximum();
void search();
void display(ll **);
void insert_at_head(ll **);
void sort();


void create(ll **head,ll **tail)
{
	printf("\nSingle Linked List Creation\n");
	int data,n;
	printf("Enter Number Of Nodes To Be Inserted\n");
	scanf("%d",&n);
	while(n)
	{
	ll *new=(ll *)malloc(sizeof(ll));
	printf("Enter Data\n");
	scanf("%d",&data);
	new->data=data;
	new->next=NULL;
	if((*head)==NULL)
	(*head)=new;
	else
	(*tail)->next=new;
	(*tail)=new;
	n--;
	}
}
void insert_at_a_node(ll **head)
{
	if((*head)==NULL)
	{
		printf("List is Empty\n");
		return ;
	}
	else
	{
		printf("\nInserting At A Node\n");
		int data,pos,i=1;
		printf("Enter Position\n");
		scanf("%d",&pos);
		printf("Enter Data\n");
		scanf("%d",&data);
		ll *new=NULL;
		ll *temp=(*head);
		while(i<pos)
		{
			temp=temp->next;	
			i++;
		}
		new=(ll *)malloc(sizeof(ll));
		new->data=data;
		new->next=temp->next;
		temp->next=new;
	}
	
}
void insert_at_head(ll **head)
{
	if((*head)==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	else
	{
		printf("Inserting at Head Node\n");
		int data;
		printf("Enter Data\n");
		scanf("%d",&data);
		ll *new=NULL;
		new=(ll *)malloc(sizeof(ll));
		new->data=data;
		new->next=(*head);
		(*head)=new;	
	}
}
void insert_before_node(ll **head)
{
	
	if((*head)==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	else
	{
		printf("\nInsert Before Node\n");
		int data,pos;
		printf("Enter data\n");
		scanf("%d",&data);
		printf("Enter Position\n");
		scanf("%d",&pos);
		ll *new=NULL,*temp=(*head);
		while(temp->next->data!=pos)
		{
			temp=temp->next;
		}	
		new = (ll *)malloc(sizeof(ll));
		new->data=data;
		new->next=temp->next;
		temp->next=new;
	}
}
void insert_after_node(ll **head)
{
	if((*head)==NULL)
	{
		printf("List is Empty\n");
		return ;
	}
	else
	{	
		printf("\nInsert After Node\n");
		int data,pos;
		printf("Enter Data\n");
		scanf("%d",&data);
		printf("Enter Position\n");
		scanf("%d",&pos);
		ll *new=NULL,*temp=(*head);
		while(temp->data!=pos)
		{
			temp=temp->next;
		}
		new=(ll *)malloc(sizeof(ll));
		new->data=data;
		new->next=temp->next;
		temp->next=new;
	}
}
void delete_head()
{
	printf("\nDeleting Head\n");
}
void delete_particular_node()
{
	printf("\nDeleting Node\n");
}
void delete_last_node()
{
	printf("\nDeleting Last Node\n");
}
void reverse()
{
	printf("\nReverse of LL\n");
}
void middle_element()
{
	printf("\nMiddle Element in LL\n");
}
void loop()
{
	printf("\nFinding Loop in LL\n");
}
void maximum()
{
	printf("\nMAximum Element in LL\n");
}
void search()
{
	printf("\nSearchinh Element\n");
}
void display(ll **head)
{
	printf("\nDisplay\n");
	ll *temp=(*head);
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
void sort()
{
	printf("\nSorting in Ascending\n");
}
int main()
{
	int option;
	ll *head=NULL,*tail=NULL;
	while(1)
	{
		printf("\n\nEnter Option\n\n1.Create\n2.Insert at a Node\n3.Insert Before Node\n4.Insert After Node\n5.Delete head\n6.Delete Particular Node\n7.Delete Last Node\n8.Reverse\n9.Middle Element\n10.Loop\n11.Maximum\n12.Search\n13.Display\n14.Sort\n15.Insert at Head\n16.Exit\n\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1: create(&head,&tail);
			break;
		case 2: insert_at_a_node(&head);
			break;
		case 3: insert_before_node(&head);
			break;
		case 4: insert_after_node(&head);
			break;
		case 5: delete_head();
			break;
		case 6: delete_particular_node();
			break;
		case 7: delete_last_node();
			break;
		case 8: reverse();
			break;
		case 9: middle_element();
			break;
		case 10: loop();
			 break;
		case 11: maximum();
			 break;
		case 12: search();
			 break;
		case 13: display(&head);
			 break;
		case 14: sort();
			 break;
		case 15: insert_at_head(&head);
			 break;	 
		case 16: exit(1);
		default:printf("!!!Sorry Try Again!!!\n");	 	 	 	 										
	}
	}
	return 0;
}
