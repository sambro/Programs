#include <stdio.h>
int main()
{
    int emp_no;
    float worked_hours_per_month, ammount_per_hour;

    scanf("%d",&emp_no);
    scanf("%f",&worked_hours_per_month);
    scanf("%f",&ammount_per_hour);

    float salary = worked_hours_per_month * ammount_per_hour;

    printf("%d\n",emp_no);
    printf("%.2f\n",salary);

    return 0;
}
