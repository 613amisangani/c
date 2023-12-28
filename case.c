#include<stdio.h>
int main()
{
  int a = 200 ,b =50 ,ch;
  
  printf("1.addition \n");
  printf("2.substract \n");
  printf("3.multiply \n");
  printf("4.division \n");
  printf("enter your choise :");
  scanf("%d",&ch);
  
  switch(ch)
  {
	  case 1:
	  printf("addition is :%d\n",a + b);
	  break;
	  
	  case 2:
	  printf("substract is :%d\n",a - b);
	  break;
	  
	  case 3:
	  printf("multiply is :%d\n",a * b);
	  break;
	  
	   case 4:
	  printf("division is :%d\n",a / b);
	  break;
	  
	  default:
	  printf("wrong choise");
	  break;
	  
  }
  
}