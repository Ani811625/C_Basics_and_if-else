//To check a number is even or odd
#include<stdio.h>
void main()
{
  int a,remainder;
  printf("Enter the positive integer for even odd calculation\n");
  scanf("%d",&a);
  if(a>0)
  {
    if(a%2==0)
    {
        printf("The number %d is an even number.",a);
    }
    else
    {
        printf("The number %d is an odd number",a);
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