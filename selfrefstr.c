#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
struct node *prev;
}*head=NULL,*newnode,*temp;
void create_node(int item)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=item;
newnode->next=NULL;
newnode->prev=NULL;
}
void insert_begin()
{
int n;
printf("\n enter element to  insert:");
scanf("%d",&n);
create_node(n);
if(head==NULL)
{
printf("\n list is empty,new node itself is head node");
head=newnode;}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
printf("\n node inserted at begin");
}
}
void display()
{
if(head==NULL)
{
printf("\n list is empty");
}
else{
temp=head;
printf("\n list from first to last");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->next;
}
}
}
void display_ltof()
{
if(head==NULL)
printf("\nlist is empty");
else
{
temp=head;
while(temp->next!=NULL)
temp=temp->next;
printf("\nlist from last to first");
while(temp!=NULL)
{
printf("<-%d",temp->data);
temp=temp->prev;
}
}
}
void main()
{
insert_begin();
insert_begin();
insert_begin();
display();
display_ltof();
}




