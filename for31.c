#include<stdio.h>
int main()
{
  char c,j,i='A';
  
  for(j=1;j<=5;j++)
  {
	  for(c = 1;c<=5;c++)
	  {
		 printf("%c",i++); 
	  }
	 printf("\n");
	  
  }
  

 return 0;
}

D:\c>for31
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY