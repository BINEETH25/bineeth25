#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int ele;
#define max 5
int a[max];
int front=0;
int rear=-1;
int main()
{
int ch;
do
{
printf("\n 1.insert");
printf("\n 2.delete");
printf("\n 3.display");
printf("\n 4.exit");
printf("\n enter ur choice : ");
scanf("%d",&ch);
}
while(ch!=4);
return 0;
}
		


