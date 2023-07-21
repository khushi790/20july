#include<stdio.h>
int main()
{
	int num=153,rem,sum=0;
	int temp;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("this number is armstrong");
	}
	else
	{
		printf("this number is not armstrong");

	}
	return 0;
}
