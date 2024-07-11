#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3,s1,s2;
    printf("Enter the co-ordinates of first point :\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the co-ordinates of second  point :\n");
    scanf("%d %d",&x2,&y2);
    printf("Enter the co-ordinates of third point :\n");
    scanf("%d %d",&x3,&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1=s2)
    {
        printf("All the points lie in same straight line");
    }
    else
    {
        printf("All the points do not lie in same straight line");
    }
}