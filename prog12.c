//To check the divisibilty of a number by 5 and 3
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number whose divisibility by 5 and 3 is to be checked\n");
    scanf("%d",&n);
    if(n>0 || n<0)
    {
        if(n%5==0 && n%3==0)
        {
            printf("The number %d is divisible by both 5 and 3.",n);
        }
        else if(n%5==0 && n%3!=0)
        {
            printf("The number %d is divisible by 5 and not 3. ",n);
        }
        else if(n%5!=0 && n%3==0)
        {
            printf("The number %d is divisible by 3 and not 5",n);
        }
    }
    else
    {
        printf("The number entered is either equal to zero or there may be another problem.!!");
    }
}