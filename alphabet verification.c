#include<stdio.h>

int main()
{
    int character, i;

    printf("Enter a character: ");
    scanf("%c",&character);

    (character>='a' && character>='z') || (character>='A' && character<='z')?
    printf("Alphabet"):printf("Not alphabet");

    return 0;
}
