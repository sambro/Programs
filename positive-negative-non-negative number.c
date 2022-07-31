#include<stdio.h>
#include<stdlib.h>
    int main()
{
    float n;

    printf("Enter a number: \n\t\t");
    scanf("%f",&n);

    if(n>0)
        printf("\t This is Positive Number \a\n");

    if(n<0)
        printf("\t This is Negative Number \a\n");

    else if(n==0)
        printf("\t Non-negative number \a\n");


    return 0;
}
