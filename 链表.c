#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	node*next;
};
int main()
{
	struct node *p1,*p2,*head;
	int i;
	head=0;

	for(i=0;i<5;i++)
	{
		p1=(node*)malloc(sizeof(node));
		(*p1).data=i;
		if(head==0)
		{
			head=p1;
			p2=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p2->next=NULL;
	p1=head;
	while(p1->data!=2)
	{
		p2=p1;
		p1=p1->next;
	}
	p2->next=p1->next;
	delete p1;
	while(head!=0)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	getch();
	return 0;
}