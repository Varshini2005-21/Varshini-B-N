#include<stdio.h>
int subtract(int a,int b )
{
return a-b;
}
void main()
{
int a,b;
printf("entre two numbers");
scanf("%d%d",&a,&b);
int difference=subtract(a,b);
printf("difference=%d",difference);
}