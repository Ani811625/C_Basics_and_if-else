//Percentage of subjects
#include<stdio.h>
void main()
{
    int sum=0,percentage=0;
    int n,i;
    printf("Enter the number of subjects whose percentage is to be calculated\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the marks of the subjects obtained by the students\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    /*for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }*/
    percentage=sum/n;
    printf("The percentage is %d",percentage);
}
