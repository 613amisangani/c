#include<stdio.h>
int main()
{
  
   int math[5];
   int sci[5];
   int phy[5];
   int total[5];
   float per[5];
   int i;
   
   for(i=0;i<=4;i++)
   {
	   printf("enter the mark of math :");
	   scanf("%d",&math[i]);
   }
   for(i=0;i<=4;i++)
   {
	   printf("enter the mark of sci :");
	   scanf("%d",&sci[i]);
   }
   for(i=0;i<=4;i++)
   {
	   printf("enter the mark of phy :");
	   scanf("%d",&phy[i]);
   }
   for(i=0;i<=4;i++)
   {
	   total[i]=math[i]+sci[i]+phy[i];
	   per[i]=(total[i]*100/300);
   }
   for(i=0;i<=4;i++)
   
   {
	   printf("total of student [%d]=%d \n",i+1,total[i]);
	   printf("percentage = %0.2f \n\n",per[i]);
	   
   }
   
 
  return 0;
}




/*
D:\c>array2
enter the mark of math :34
enter the mark of math :54
enter the mark of math :65
enter the mark of math :76
enter the mark of math :34
enter the mark of sci :54
enter the mark of sci :46
enter the mark of sci :37
enter the mark of sci :86
enter the mark of sci :65
enter the mark of phy :86
enter the mark of phy :97
enter the mark of phy :56
enter the mark of phy :76
enter the mark of phy :56
total of student [1]=174
percentage = 58.00

total of student [2]=197
percentage = 65.00

total of student [3]=158
percentage = 52.00

total of student [4]=238
percentage = 79.00

total of student [5]=155
percentage = 51.00
*/