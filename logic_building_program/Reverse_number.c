/*Reverse a Number*/
#include<stdio.h>
int main()
{
    int num,remainder,reversed=0;
    printf("Enter the a number :");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder = num % 10;
        reversed = reversed * 10 +  remainder;
        num = num /10;
    }
    printf("\n %d The Reverse Number ",reversed);
    return 0;
}