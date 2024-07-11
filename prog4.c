#include<stdio.h>
void main()
{
    float p,r,t,simple_interest;
    printf("Enter the principal amount \n");
    scanf("%f",&p);
     printf("Enter the rate of interest\n");
    scanf("%f",&r);
     printf("Enter the time period\n");
    scanf("%f",&t);
    simple_interest=(p*r*t)/100;
    printf("The Simple Interest is %f",simple_interest);
}