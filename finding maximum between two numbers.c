#include<stdio.h>

int main()
{
    int a, b, maximum;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    maximum=(a>b)?a:b;

    printf("The maximum value is: %d",maximum);

    return 0;
}
