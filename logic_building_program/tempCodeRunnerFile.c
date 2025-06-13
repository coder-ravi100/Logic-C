#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit=0,sum=0,rem=0,power;
    printf("\nEnter the Number :");
    scanf("%d",&num);
    int temp = num;/*loop mein use hoga digit-wise kaam ke liye.*/
    int  copy = num;/*final comparison ke liye use hoga*/
    while (num!=0)
    {
        num = num / 10;
        digit++;
    }
    while (temp!=0)
    {
        rem = temp % 10;
        power = pow(rem,digit);
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == copy)
    {
        printf("\n %d is An Armstrong Number :",copy);
    }
    else
    {
        printf("\n %d is Not An Armstrong Number :",copy);
    }
    return 0;
}