//Display the grade for the corresponding marks
#include<stdio.h>
void main()
{
    int m;
    printf("Enter marks for checking the grade:\n");
    scanf("%d",&m);
    if(m>=90 && m<=100)
    {
      printf("Grade is :\n O");
    }
    else if(m>=80 && m<=89)
    {
      printf("Grade is :\n E");
    }
    else if(m>=70 && m<=79)
    {
      printf("Grade is :\n A");
    }
    else if(m>=60 && m<=69)
    {
      printf("Grade is :\n B");
    }
    else if(m>=50 && m<=59)
    {
      printf("Grade is :\n C");
    }
    else if(m>=40 && m<=49)
    {
      printf("Grade is :\n D");
    }
    else if(m>=0 && m<=39)
    {
      printf("He is fail!! ");
    }
    else
    {
        printf("Enter a valid marks");
    }
}