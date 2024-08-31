#include <stdio.h> 
void main() 
{ int n; 
 printf("enter the number\n"); 
 scanf("%d",&n); 
 if(n<0) 
 {
   printf("the number is negative"); 
 }
 else if(n==0) 
 {
   printf("the number is zero"); 
 }
 else
 {
   printf("the number is positive");
 }
}