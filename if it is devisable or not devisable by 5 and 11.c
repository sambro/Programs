#include<stdio.h>

int main()
{
    int a;

    printf("Enter the value of a: ");
    scanf("%d",&a);

    /*if(a%5==0)
    {
        printf("It is divisible by 5");
    }
    else if(a%11==0)
    {
        printf("It is divisible by 11");
    }
    else{
        printf("Not divisible");
    }*/


    (a%5==0)?printf("It is divisible by 5"):(a%11==0)?printf("It is divisible by 11"):("Not divisible");

    return 0;
}
