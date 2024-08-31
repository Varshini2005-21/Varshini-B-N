#include<stdio.h>
void main(){
int n,flag=1,i,j;
printf("entre the number");
scanf("%d",&n);
if(n==1||n==2)
{flag=1;
} 
for(j=2;j<=n;j++)
{
flag=0;
for(i=2;i<=n/2;i++)
{
if(j%i==0)
{
flag=1;
}}}
if(flag==1)
{
printf("%d is not prime number",n);
}
else
{
printf("%d is a prime number",n);
}
