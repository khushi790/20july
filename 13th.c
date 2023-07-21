//prg to print even number between 100 to 1
#include<stdio.h>
int main()
{
	int i=100;
	while(i>=1)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i--;
	}
}
