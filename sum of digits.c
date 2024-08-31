#include<stdio.h>
void
main

int i,n,s,u;
printf("Enter the number\n");
scanf("%d",&n); 
sum=0; 
while(n!=0) 
{
sum=sum+(n%10);
n=n/10;
}
printf("sum=%d\n",sum); 
}
