#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
int ele;
#define max 5
int a[max];
int top=-1;
int main()
{
int ch;
do
{
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.display");
printf("\n 4.peek");
printf("\n 5.exit");
printf("\n enter a option:");
scanf("%d",&ch);
switch(ch)
{
case 1:
     push();
break;
case 2:
     pop();
break;
case 3:
     display();
break;
case 4:
     peek();
break;
case 5:
     exit(0);
break;
}
}
while(ch!=5);
return 0;
}
void push()
{
if(top==max-1)
{
printf("\n stack is overflow");
}
else
{
printf("\n enter the element : ");
scanf("%d",&ele);
top++;
a[top]=ele;
printf("\n item is pushed");
}
}
void pop()
{
if(top==-1)
{
printf("\n stack is empty");
return;
}
else
ele=a[top];
printf("\n %d is popped",ele);
top--;
}
void display()
{
int i;
if(top==-1)
{
printf("\n stack is empty");
return ;
}
else 
{
printf("\n stack is \n");
for(i=top;i>=0;i--)
{
printf("%d",a[i]);
}
}
}
void peek()
{
printf("top most");
}



