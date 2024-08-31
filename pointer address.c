#include<stdio.h>
void main()
{
int *a;
float *b;
char *c;
printf("Size of integer pointer is %d\n",sizeof(a));
printf("Size of float pointer is %d\n",sizeof(b));
printf("Size of char pointer is %d\n",sizeof(c));
char d="a";
c = &d;
printf("Address of d is %d\n",c);
printf("Value of d is %d\n",*c);
}