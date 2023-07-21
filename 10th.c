//prg to check a number is prime or not 
#include <stdio.h>
int main()
{
   	int n,i,temp=0;
 	printf("Enter number to check prime number or not:");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            temp=1;
            break;
        }
        i++;
    }
 	if (temp==0)
    {
        printf("%d is a prime number.",n);
	}
	else
	{
        printf("%d is not a prime number.",n);
	}
    return 0;
}
