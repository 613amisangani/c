#include<stdio.h>
int main()
{
    int i;
    
    printf("even  Numbers Between 1 To 100 are: \n");
	
	
    for (i = 1; i <= 100; ++i)
	{
        if (i % 4 != 1){
            printf("%d\n", i);
    }
}
    return 0;
}