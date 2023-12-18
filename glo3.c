#include<stdio.h>
int add()
{
	int math;
	int phy;
	int chem;
	int total;
	float per;
	
	printf("enter the value for math:");
	scanf("%d",&math);
	printf("enter the value for phy:"); 
	scanf("%d",&phy);
	printf("enter the value for chem:");
	scanf("%d",&chem);
	
	
}
int sub()
{
	
	total=math+phy+chem;
	printf("sum is : %d",total);
	return total;
	
}
int gra()
{
	
	per=(total*100)/300;
	
	printf("per is : %f",total);
	total=sub();
	return per;
	
}

int main()
{
	
	add();
	sub();
	gra();
	
	return 0;
}









