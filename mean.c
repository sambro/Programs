#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c;
    float mean(int,int,int);
    clrscr();

    printf("Enter the value of a b and c\n");
    scanf("&a,&b,&c");

    printf("The values %d %d and %d's average is %0.2f",a,b,c,mean(a,b,c));
    getch();
}

float mean(int T1, int T2, int T3)
{
    float avg;

    avg= (T1+T2+T3)/3;

    return (avg);
}
