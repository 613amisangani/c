#include<stdio.h>
void add()
{
	int math;
	int phy;
	int chem;
	
	printf("enter the value for math:");
	scanf("%d",&math);
	printf("enter the value for phy:"); 
	scanf("%d",&phy);
	printf("enter the value for chem:");
	scanf("%d",&chem);
	
}
void sub()
{
    int math;
    int phy;
    int chem;
	int total;
	
	total=math+phy+chem;
	printf("sum is : %d",total);
}
void gra()
{
	
	int total;
	float per;
	
	per=(total*100)/300;
	
	printf("per is : %f",per);
	
}

int main()
{
	
	add();
	sub();
	gra();
}









/*
D:\c>glo2
enter the value for math:10
enter the value for phy:10
enter the value for chem:10
sum is : 30per is : 3.000000
*/