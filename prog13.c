//To find the greatest of three numbers
#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter the three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    ((n1 > n2 && n2 > n3) ? printf("%d is Greatest among three given numbers.", n1) : (n2 > n1 && n1 > n3 ? printf("%d is Greatest among three given numbers.", n2) : printf("%d is Greatest among three given numbers.", n3)));
}