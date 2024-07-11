//To calculate the number of digits of a given number
#include<stdio.h>
void main()
{
    int n,a,i=0;
    printf("Enter the number whose number of digits is to be calculated\n");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        i++;
    }
    printf("NO.OF DIGITS OF %d IS:%d",n,i);
}