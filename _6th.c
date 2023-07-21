#include<stdio.h>
int main()
{
	int i=1,fact=1,num;    
	printf("Enter a number:");    
  	scanf("%d",&num); 
	while(i<=num)
	{
		fact=fact*i;
		i++; 

	}  
    printf("Factorial is= %d",fact);    
	return 0; 
}
