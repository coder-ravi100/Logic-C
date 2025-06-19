/*1. Perfect Number Kya Hota Hai?
Perfect Number woh number hota hai jiske sare proper divisors ka sum usi number ke barabar hota hai.
6 ke divisor = 1 + 2 + 3 + 6 = 6 yes this perfect number
Proper Divisors = woh numbers jo us number ko divide karte hain excluding the number itself*/
/*Check Perfect Numbers*/
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("\n Enter Number:");
    scanf("%d",&num);

    for ( i = 1; i <num; i++)
    {
        if (num % i  ==0)
        {
           sum = sum +i;
        }
    }
    if (sum ==  num)
    {
        printf("\n%d number is perfect:",num);
    }
    else
    {
         printf("\n %d number is Not perfect:",num);
    }
    return  0;
}