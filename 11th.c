//prg to print even number
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("%d",i);
			printf("\n");
		}
		i++;
	}
}
