//prg to print table from 1 to 10
#include <stdio.h>
int main()
{
    int i=1,j;
	while(i<=10)
    {
		j=1;
        while(j<=10) 
        {
            printf("%d ",i*j);
            j++;
        }
        printf(" \n");

        i++;
    }
    return 0;
}
