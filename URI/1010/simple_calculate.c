#include<stdio.h>
int main()
{
    int prod1, unit1; double prize1;
    int prod2, unit2; double prize2;

    scanf("%d",&prod1);
    scanf("%d",&unit1);
    scanf("%lf",&prize1);

    scanf("%d",&prod2);
    scanf("%d",&unit2);
    scanf("%lf",&prize2);

    double result;

    result=((unit1*prize1)+(unit2*prize2));

    printf("VALOR A PAGAR: R$ %0.2lf",result);

    return 0;

}
