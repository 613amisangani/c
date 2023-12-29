#include<stdio.h>
int main()
{
  char str[]={'s','k','i','l','l','\0'};
  gets(str);
  
  int i=0;
  while(str[i]!='\0')
  {
	  i++;
  }
  while(i>=0)
  {
	  printf("%c",str[i]);
	  i--;
  }
}