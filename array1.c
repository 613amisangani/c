#include<stdio.h>
int main()
{
   
  int a, array[5]= {0,1,2,3,4};
  int array1[4];
  
  array1[0]=5;
  array1[1]=10;
  array1[2]=15;
  array1[3]=25;
  
  
  for(int i=0;i<=5;i++)
  {
	  printf("enter your value %d is \n",i);
	  scanf("%d \n",&array[i]);
  }
  for(int i=0;i<=5;i++)
  {
	  printf("enter your value %d is \n ",array[i]);
  }
  
   
  return 0;
}


/*
D:\c>array1
enter your value 0 is
1
2
enter your value 1 is
3
enter your value 2 is
4
enter your value 3 is
5
enter your value 4 is
6
enter your value 5 is
7
enter your value 1 is
 enter your value 2 is
 enter your value 3 is
 enter your value 4 is
 enter your value 5 is
 enter your value 5 is
 */