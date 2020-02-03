#include<stdio.h>
int main()
{
char str[100];
int i,j,l=0;
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
l++;
for(i=0;i<=l;i++)
{
if(str[i]==' '|| i==l)
{
for(j=i-1;j>=0;j--)
{
if(str[j]!=' ')
printf("%c",str[j]);
else
break;
}
printf(" ");
}
}
return 0;
}


