/* First */

#include<stdio.h>

int main()
{
    int LA[]={2,4,6,8,10};
    int item,n;

    printf("Enter the item number: ");
    scanf("%d",&item);

    n=item;

    int j;
    int sum=0;
    for(j=0;LA[j]<=LA[n];j++)
    {
        sum=sum+LA[j];
    }

    printf("Item %d found at location %d",item,sum);

    return 0;
}

/// needs correction
