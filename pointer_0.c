#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 10;
    int *pointer_a = &a;

    printf("%d's dereference is %d\n",a,*pointer_a);

    a = a+1;

    printf("%d's dereference is %d",a,*pointer_a);

    return EXIT_SUCCESS;

}
