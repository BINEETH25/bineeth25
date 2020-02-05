// implementation of linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head;
void insert();
void delete();
void display();
int ele;
int main()
{
int ch;
do
{
printf("\n 1.insert");
printf("\n 2.delete");
printf("\n 3.display");
printf("\n 4.exit");
printf("\n 5.search");
printf("\n enter ur choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
case 5:
search();
break;
}
}while(ch!=4);
return 0;
}
void insert()
{
struct node *ptr,*tmp;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\n list is overflow");
}
else
{
printf("enter the item");
scanf("%d",&ele);
ptr->data=ele;
if(head==NULL)
{
ptr->next=NULL;
head=ptr;
printf("\n node is inserted");
}
else
{
tmp=head;
while(tmp->next!=NULL)
{
tmp=tmp->next;
}
tmp->next=ptr;
ptr->next=NULL;
printf("\n node is inserted");
}
}
}
void delete()
{
struct node *ptr,*ptr1;
if(head==NULL)
{
printf("\n list s empty");
}
else if(head->next==NULL)
{
head=NULL;
free(head);
}
else 
{
ptr=head;
while(ptr->next!=NULL)
{
ptr1=ptr;
ptr=ptr->next;
}
ptr->next=NULL;
free(ptr);
printf("\n node is deleted");
}
}
void display()
{
struct node *tmp;
tmp=head;
if(tmp==NULL)
{
printf("\n list is empty");
}
else
{
printf("\n list is\n");
while(tmp!=NULL)
{
printf("%d ",tmp->data);
tmp=tmp->next;
}
}
}
void search()
{
struct node *tmp;
int i=0,key,flag=0;
tmp=head;
if(head==NULL)
printf("\n list is empty");
else
{
printf("enter the searching element");
scanf("%d",&key);
while(tmp!=NULL)
{
i++;
if(tmp->data==key)
{
printf("%d is found at %d location",key,i);
flag=1;
break;
}
tmp=tmp->next;
}
if(flag==0)
printf("%d is not found",key);
}
}





















