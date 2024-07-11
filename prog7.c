//To check a year is leap year or not.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the year to find wether it is a leap year or not\n");
    scanf("%d",&a);
    if(a>0 && a%4==0)
    {
        printf("The year %d is a leap year.",a);
    }
    else
    {
      printf("The year %d is not a leap year",a);
    }
}