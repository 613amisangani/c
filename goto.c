#include<stdio.h>
int main()
{
  int i = 1;
  skill:
  if(i<=15)
  {
    printf("%d",i);
	i++;
	goto skill;
  }
  
}