#include<stdio.h>
#include<string.h>
struct book{
int num;
char name[20];
18
float price;
};
void main()
{
struct book hp;
hp.num=1;
hp.price=100.0;
strcpy(hp.name,"meghavarshini");
printf("book numberis:%d\n",hp.num);
printf("book price=%f\n",hp.price);
printf("book name=%s\n",hp.name);
}