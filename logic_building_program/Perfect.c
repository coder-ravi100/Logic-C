/*1. Perfect Number Kya Hota Hai?
Perfect Number woh number hota hai jiske sare proper divisors ka sum usi number ke barabar hota hai.*/

/* 1. Perfect Number
(Number ke chhote divisors ka sum agar number ke barabar ho, 
toh woh Perfect Number hota hai. Ex: 6 → 1 + 2 + 3 = 6 )*/
#include<stdio.h>
int main()
{
    int number ,sum=0, i;
    printf("\nEnter Number:");
    scanf("%d",&number);
    for ( i = 1; i < number; i++)
    {
       if (number % i == 0)//koin se number Divisor hai Wohi number ka sum hoga
       {
        sum = sum + i;
       }
    }
    if (number == sum)
    {
        printf("\n%d is perfect Number",number);
    }
    else
    {
        printf("\n%d is Not perfect Number",number);
    }
    return 0;
}