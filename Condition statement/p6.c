/*Check Whether a number is divided by 5 or 10*/
#include<stdio.h>
int main()
{
    int num,year;
    printf("Enter The Number:");
    scanf("%d",&num);
    printf("Enter The Year:");
    scanf("%d",&year);
    if (num % 5 == 0 && num % 10 == 0)
    {
        printf("\n The Number Is Divided  By 5 and 10 :%d",num);
    }
    else
    {
         printf("\n The Number Is Not Divided  By 5 and 10 :%d",num);
    }
    printf("\n-------------------------------------------------");
    if ((year % 4 == 0 ||  year % 400 == 0) && (year % 100 !=0))
    {
         printf("\n This Is A Leap Year:%d",year);
    }
    else
    {
        printf("\n This Is Not A Leap Year:%d",year);
    }
    return 0;
}