

// C program to count total number of words in a sting

#include <stdio.h>

int main()
{
    char str[100]="MAX_SIZE";
    int i, words;

    printf("Enter any sting: ");
    gets(str);

    i = 0;
    words = 1;

    /* Runs a loop till end of sting */
    while(str[i] != '\0')
    {
        /* If the current character(st[i]) is white space */
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t' || str[i]==',')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}
