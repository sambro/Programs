#include<stdio.h>

int main()
{
    float A, B, C;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    float triangle = (0.5*A*C);
    float circle = 3.14159*(pow(C, 2));
    float trapezium = 0.5*(A+B)*C;
    float square = pow(B, 2);
    float rectangle = (A*B);

    printf("TRIANGULO: %0.3f\n",triangle);
    printf("CIRCULO: %0.3f\n",circle);
    printf("TRAPEZIO: %0.3f\n",trapezium);
    printf("QUADRADO: %0.3f\n",square);
    printf("RETANGULO: %0.3f\n",rectangle);

    return 0;
}
