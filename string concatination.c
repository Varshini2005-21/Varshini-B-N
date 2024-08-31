#include<stdio.h>
void main()
{
char str1[10],str2[10];
printf("enter the 2 string");
scanf("%s%s",str1,str2);
strcat(str1,str2);
printf("%s",str1);
}