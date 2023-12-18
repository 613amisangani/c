#include<stdio.h>
int main()
{
  char c,j,i='a';
  
  for(j=1;j<=5;j++)
  {
	  for(c = 1;c<=j;c++)
	  {
		 printf("%c",i++); 
	  }
	 printf("\n");
	  
  }
  

 return 0;
}

/*
D:\c>for46
a
bc
def
ghij
klmno
*/