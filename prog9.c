//Checking wether the seller has incured a profit or loss
#include<stdio.h>
void main()
{
    int cp,sp,loss,profit; 
    printf("Enter the cost price of the seller \n");
    scanf("%d",&cp);
    printf("Enter the selling price for the seller \n");
    scanf("%d",&sp);
    if(cp>sp)
    {
        printf("The Seller incured a loss\n");
        loss=cp-sp;
        printf("And the loss incured is:\n Rs.%d",loss);
    }
    else if(cp<sp)
    {
        printf("The Seller incured a profit\n");
        profit=sp-cp;
        printf("And the profit incured is:\n Rs.%d",profit);
    }
    else
    {
        printf("Since cost price and selling price of the seller is same ,therefore the seller has neither incured a profit nor a loss.");
    }
}