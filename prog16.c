//To find the exact location of the given point in the co-ordinate system
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the x co-ordinate and y co-ordinate of the point\n");
    scanf("%d %d",&x,&y);
    if(x==0 && y!=0)
    {
        printf("The given point lies in the y-axis");
    }
    else if(x!=0 && y==0)
    {
        printf("The given point lies in the x axis");
    }
    else{printf("The given point lies in the origin");}
}