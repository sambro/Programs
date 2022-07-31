#include<stdio.h>
int main()
{
    float A, B, C;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    float w1=2, w2=3, w3=5;
    float average =((A*w1+B*w2+C*w3)/(w1+w2+w3));

    printf("MEDIA = %.1f",average);

    return 0;



}
