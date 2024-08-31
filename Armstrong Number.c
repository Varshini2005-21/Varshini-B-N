#include<stdio.h>
#include<math.h>
void main()
{ int or,rem,res=0,dig=0,n;
printf("entre the number");
scanf("%d",&n);
or=n;
while(or!=0)
{
or/=10;
dig++;
printf("iteration :%d ,digits counted so far:%d\n",dig,dig);
}
or=n;
while(or!=0)
{ rem=or%10;
res+= pow(rem,dig);
or/=10;
} if(res==n)
printf("%d is an arm number");
else
printf("%d is not an arm number");
}