#include<stdio.h>
int main()
{
   char c;
   
   for(c = 'A' ; c <= 'Z'; ++c)
   {
   printf("%c \n",c);
   }
   
   for(c = 'a' ; c <= 'z'; ++c)
   {
   printf("%c \t",c);
   }
   return 0;
}