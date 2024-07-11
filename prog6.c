//To check a number is divisible by 5
#include<stdio.h>
void main()
{
  int a;
  printf("Enter the positive integer for divisibility checking\n");
  scanf("%d",&a);
  if(a>0)
  {
    if(a%5==0)
    {
    printf("The number %d is divisible by 5",a);
    }
    else
    {
    printf("The number %d is not divisible by 5",a);
    }
  }
  else if(a<0)
  {
    printf("The number entered is a negative number");
  }
  else
  {
   printf("The number entered is equal to zero");
  }
}