#include<stdio.h>
#include<string.h>
union emp
{
char ename[10];
int eid;
float esal;
}e;
int main()
{
printf("\n employee details \n");
strcpy(e.ename,"dolly");
printf("\n name:%s",e.ename);
e.esal=100000;
printf("\n salary:%.2f",e.esal);
e.eid=14567;
printf("\n id:%d",e.eid);
return 0;
}

