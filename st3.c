#include<stdio.h>
int main()
{
 char str1[20];
 char str2[20];
 
 
 gets(str1);
 gets(str2);
 
 int i=0;
 int j=0;
 
 while(str1[i]!='\0')
 {
	
     i++;
    	 
 }
 for(j=0;str2[j]!='\0';j++,i++)
 {
	 
	 str1[i]=str2[j];
 }
 str1[i]='\0';
 printf("\n%s",str1);
 
 return 0;
}

/*
D:\c>st3
skill
qode

skill qode
*/