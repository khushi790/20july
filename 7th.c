//prg to print how many digits in a number..
#include<stdio.h>
int main()
{
    int num;
    int i=0;
    printf("enter any number:");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        i++;
    }
    printf("total digits in a number=%d",i);
}
