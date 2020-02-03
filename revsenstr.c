#include<stdio.h>
int main()
{
char str[100];
int i,j,l=0;
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
l++;
for(i=l;i>=-1;i--)
{
if(str[i]==' ' || i==-1)
{
for(j=i+1;j<=l;j++)
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
