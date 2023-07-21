//prg to print even number
#include<stdio.h>
int main()
{
	int i=100;
	while(i>=1)
	{
		if(i%2==0)
		{
			printf("%d",i);
			printf("\n");
		}
		i++;
	}
}
