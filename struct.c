#include<stdio.h>
struct student{
 int rollno;
 int name[50];
 int m,s,e,t;
 float per;
};

int main()
{
	struct student a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter roll no:");
		scanf("%d",&a[i].rollno);
		printf("enter name:");
		scanf("%s",&a[i].name);
		printf("enter your math mark:");
		scanf("%d",&a[i].m);
		printf("enter your science mark:");
		scanf("%d",&a[i].s);
		printf("enter your english mark:");
		scanf("%d",&a[i].e);
		printf("\n");
	}
	printf("\nroll no\tname\tmath\tscience\tenglish\ttotal\tper");
	for(i=0;i<2;i++)
	{
		a[i].t = a[i].m + a[i].s + a[i].e;
		a[i]per = (a[i].t*100)/300;
		
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);
	
	
	}
	return 0;
}