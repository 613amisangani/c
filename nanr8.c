#include<stdio.h>
void abc()
{

  char c;
  
   
   for(c='a';c<='z';++c)
   {
     printf("%c \t",c);  
   }
   
}

int main()
{

    char c;
	printf("the value is:",c);
	abc();


}

/*

D:\c>nanr8
the value is:a  b       c       d       e       f       g       h       i       j       k       l       m       
n       o       p   q        r       s       t       u       v       w       x       y       z
*/