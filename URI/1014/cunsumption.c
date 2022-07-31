#include<stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter the total distance travelled: ");
    scanf("%d",&a);

    printf("Enter the fuel in liter: ");
    scanf("%f",&b);

    float average;

    average = a/b;

    printf("The average is %.3f",average);

    return 0;
}
