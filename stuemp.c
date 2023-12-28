#include<stdio.h>
struct employee{
 int pronum;
 int amt,di,bill,gst,net;
 char name[50];
 int r = 50;
 int q = 200;
 
};

int main()
{
  struct employee a[5];
  int i;
  for(i=0;i<3;i++)
  {
	printf("enter pronum :");
    scanf("%d",&a[i].pronum);
	printf("enter name :");
    scanf("%s",&a[i].name);
	//printf("enter the amt :");
	//scanf("%d",&a[i]amt);
	printf("\n");
	
  }
  printf("\nemployee\tpronum\tr\tq\tamt\tdi\tbill\tgst\tnet");
  
  for(i=0;i<3;i++)
  {
	  a[i].amt = a[i].r * a[i].q;
	  printf("%d",a[i].amt);
  }
}