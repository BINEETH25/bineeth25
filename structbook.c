#include<stdio.h>
struct book
{
char title[1000];
int pages;
float price;
};
int main()
{
struct book b;
printf("\n enter title,pages and price of the book\n");
scanf("%s%d%f",&b.title,&b.pages,&b.price);
printf("\n BOOK DETAILS ARE\n");
printf("\n TITLE:%s",b.title);
printf("\n NO OF PAGES:%d",b.pages);
printf("\n PRICE:%f",b.price);
return 0;
}

