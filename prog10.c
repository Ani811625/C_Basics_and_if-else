//Comparison of area and perimeter of a rectangle
#include<stdio.h>
void main()
{
    int l,b,area,perimeter;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d %d",&l,&b);
    perimeter=2*(l+b);
    area=l*b;
    if(area>perimeter)
    {
        printf("The area of the rectangle of length %d and breadth %d is greater than its perimeter.",l,b);
    }
    else
    {
         printf("The perimeter of the rectangle of length %d and breadth %d is greater than its area.",l,b); 
    }
}