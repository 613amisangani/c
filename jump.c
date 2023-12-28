#include<stdio.h>
int main()
{
  int i = 1;
  ami:
  if(i<=15){ 
    printf("%d \n",i);
	i++;
	goto ami;
  }
  
}