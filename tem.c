#include<stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("abc.txt","w+");
  fprintf(fp,"welcome to skill qode \n");
  fputs("we are learing c language now \n",fp);
  fclose(fp);
}