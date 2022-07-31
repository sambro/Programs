/*code for finding the max value between two numbers using function call*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,result;

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    result=max(a,b);
    printf("Max number is %d",result);
}

int max(num1,num2)
{
    if(num1<num2)
        return num2;
        else
        return num1;
}
