#include<stdio.h>
void main()
{
  inta,b; 
  float res;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("1-add\n2-sub\n3-mul\n4-div\n");
  printf("enter choice "); 
  int ch;
  scanf("%d",&ch); 
  switch(ch) 
  {
    case 1 : res=a+b; 
      printf("result=%f\n",res); 
      break; 
    case 2 : res= a-b; 
      printf("result= %f\n",res); 
      break; 
    case 3: res=a*b; 
      printf("result=%f\n",res); 
      break; case 4: 
      if(b==0) 
      {
        printf("division not possible\n"); 
      }
      else 
      {
        res=a/b; 
        printf("result=%f\n",res);
      }
      break;
    default : printf("invalid choice"); 
      break; 
  }
}
