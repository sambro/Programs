#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,b_sqr,sqre,sqre_root_1,sqre_root_2,result;
    printf("Enter number for finding the square root of a number: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //result= sqrt(((b^2)-4*a*c));

    b_sqr=(pow(b,2))-(4*a*c);
    sqre=sqrt(b_sqr);

    sqre_root_1=(-b+sqre)/2*a;
    sqre_root_2=(-b-sqre)/2*a;

    printf("The results are (%d) , (%d)",sqre_root_1,sqre_root_2);

    return 0;

}
