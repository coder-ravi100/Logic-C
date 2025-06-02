/*Chech Wether a number is positive*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("\n Number is Positive %d",num);
    }
    return 0;
}