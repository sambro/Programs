#include<stdio.h>

int main()

{
    char ch;

    printf("Enter the character for checking: ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("This is an alphabet");
    }

    else if((ch>=0) || (ch<=9))
    {
        printf("This is a digit");
    }

    else
    printf("This is a special character");

    return 0;
}
