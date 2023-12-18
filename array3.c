#include<stdio.h>
int main()
{
	 int a,sum=0;
	 int array1[5];
	 
	 
	 printf("enter value of sum:");
	 scanf("%d \n",&array1[5]);
	 
	 for(a=0;a<=10;a++)
	 {
		 sum=sum+a;
		 printf("%d",array1[5]);
	 }
	 printf("\n sum is:%d\n",sum);

   return 0;
}




int[] myArray = {1, 5, 10, 25};
int sum = 0;
int i; 


for (i = 0; i < myArray.length; i++) {
  sum += myArray[i];
}

System.out.println("The sum is: " + sum);