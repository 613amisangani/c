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
		printf("\n%d\t%s\t%d\t%d\t%d\t%d",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t);
		a[i].per = ((a[i].t*100)/300);
		printf("\t%0.2f",a[i].per);
	
	
	}
	return 0;
}









/*

D:\c>per
enter roll no:12
enter name:ami
enter your math mark:76
enter your science mark:58
enter your english mark:98

enter roll no:14
enter name:mit
enter your math mark:87
enter your science mark:94
enter your english mark:35


roll no name    math    science english total   per
12      ami     76      58      98      232     77.000000
14      mit     87      94      35      216     72.000000
*/