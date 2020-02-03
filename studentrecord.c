#include<stdio.h>
#include<string.h>
struct student
{
char name[1000];
int rno;
float fee;
char add[1000];
}s;
int main()
{
strcpy(s.name,"dolly");
s.rno=2528;
s.fee=50000;
strcpy(s.add,"hyd");
printf("\n STUDENT DETAILS\n");
printf("\n name:%s",s.name);
printf("\n rno:%d",s.rno);
printf("\n fee:%.2f",s.fee);
printf("\n add:%s",s.add);
return 0;
}
