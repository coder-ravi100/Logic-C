/*Print Day Of Week Base On Nuumber [1-7]*/
#include<stdio.h>
int main()
{
    int day;
    up:
    printf("\n Enter the Day :");
    scanf("%d",&day);
    if (day == 1)
    {
        printf("\n Monday");
    }
    else  if (day == 2)
    {
        printf("\n Tuesday");
    }
    else if (day == 3)
    {
        printf("\n Wednesday");
    }
    else if (day == 4)
    {
        printf("\n Thursday");
    }
    else if (day == 5)
    {
        printf("\n Friday");
    }
    else if (day == 6)
    {
        printf("\n Satarday");
    }
    else if (day == 7)
    {
        printf("\n Sunday");
    }
    goto up;
    return 0;
}