#include<stdio.h>

int main()
{
    int a,b,c,maximum;

    printf("First value: ");
    scanf("%d",&a);
    printf("Second value: ");
    scanf("%d",&b);
    printf("Third value: ");
    scanf("%d",&c);

    maxumum = (a>b && a>c)? a: (b>c)? b:c;

    printf("The maximum value is: %d",maximum);

    return 0;
}
