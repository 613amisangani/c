#include<stdio.h>
int main()
{
 char str1[20];
 char str2[20];
 char str3[20];
 
 gets(str1);
 gets(str2);
 
 int i,j;
 for(i=0;str1[i]!='\0';i++)
 {
	 (str3[j]=str1[i]);
	 j++;
 }
 for(i=0;str2[i]!='\0';i++)
 {
	 (str3[j]=str2[i]);
	 j++;
	 
 }
 
  printf("\n %s",str3);
 
   return 0;
 
}


