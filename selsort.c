#include<stdio.h>
int main()
{
int n,a[100],i,j,min,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
