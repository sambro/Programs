#include<stdio.h>
int main()
{
    double A, B;

    scanf("%lf",&A);
    scanf("%lf",&B);

    double w1=3.5, w2=7.5, average;

    average=((A*w1+B*w2)/(w1+w2));

    printf("MEDIA = %.5lf",average);

    return 0;


}
