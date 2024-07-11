#include<stdio.h>
void main()
{
  float r,volume_sphere;
  printf("Enter the radius of the sphere\n");
  scanf("%f",&r);
  volume_sphere=(4/3)*3.14*r*r*r;
  printf("The volume of the sphere of radius %f is %f",r,volume_sphere);
}