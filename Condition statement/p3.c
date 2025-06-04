/*Check whether a person is Eligible to Vote  (age>=18)*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num >= 18)
    {
         printf("Eligible For Vote :%d",num);
    }
    else
    {
        printf("Not Eligible For Vote :%d",num);
    }
    return 0;
}