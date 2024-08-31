#include<stdio.h>
void main()
{
  FILE*fp;
  char c[50]; 
  fp=fopen("file.txt","w");
  fputc('a',fp);
  fputs("Hello",fp);
}