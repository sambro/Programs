#include <stdio.h>
int main()
{
    int A, B, C, D;

    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);

    int Difference;

    Difference = ((A*B)-(C*D));

    printf("%d",Difference);

    return 0;
}
