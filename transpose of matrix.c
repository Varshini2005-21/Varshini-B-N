#include<stdio.h>
void main() 
{
  int a[10][10],i,j; 
  for(i=1;i<=2;i++)
    {
      for(j=1;j<=2;j++) 
      {
        printf("enter the elements"); scanf("%d",&a[i][j]); 
      }}
  printf("the matrix is\n"); 
  for(i=1;i<=2;i++) {
    for(j=1;j<=2;j++) 
    {printf(" %d",a[i][j]);
    }printf("\n");
  }printf("the transpose of the matrix are\n"); for(i=1;i<=2;i++) 
  {for(j=1;j<=2;j++) 
  {
    printf(" %d",a[j][i]); 
  }printf("\n"); 
  }

}