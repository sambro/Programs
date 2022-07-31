#include<stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("This is a vowel");
    }

    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("This is a consonant");
    }

    else
    {
        printf("Error character given");
    }

    return 0;
}
