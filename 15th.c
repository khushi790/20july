//prg to print even number between two random number
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numbers:");
	scanf("%d %d",&num1,&num2);
	while(num1<=num2)
	{
		if(num1%2==0)
		{
			printf("%d\n",num1);
		}
		num1++;

	}
}
