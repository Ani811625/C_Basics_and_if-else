//To print the absolute value of a number entered by the user
#include<stdio.h>
void main()
{
    int n,absolute_value;
    printf("Enter the number whose absolute value is required\n");
    scanf("%d",&n);
    if(n<0)
    {
        absolute_value=n*(-1);
    printf("The absolute value of %d is :%d",n,absolute_value);
    }
    else 
    {
      printf("The absolute value of %d is :%d",n,n);   
    }
}