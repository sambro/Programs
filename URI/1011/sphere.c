#include<stdio.h>
#include<math.h>

int main()
{
    double R;
    scanf("%lf",&R);
    int R1= pow(R, 3);

    double volume = (4.0/3)*3.14159*R1;

    printf("VOLUME = %0.3lf",volume);


    return 0;

}
