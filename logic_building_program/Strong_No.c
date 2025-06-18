/*Check a Strong Number*/
/* Logic Flow (Step-by-step)
Original number store kar lo (e.g., num = 145)
Ek loop chalao jab tak number > 0 ho
Last digit nikaalo: digit = num % 10
digit ka factorial nikaalo (using loop
Sum mein add karo
Number ko update karo: num = num / 10
Loop ke baad compare karo:
if (sum == original) → Strong Number*/
//digit Count ---> Factorial ---> Sum Of Factorial ----> then Campare Value
#include<stdio.h>
int main()
{
   int num,sum=0;
   printf("\n Enter Number:");
   scanf("%d",&num);
   int temp = num;
   while (num!=0)
   {
    int digit = num % 10;
    int fact = 1 , i;

        for ( i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
    sum = sum + fact;
    num = num / 10;
   }
   if (sum == temp)
   {
    printf("\n %d:is Strong Number",temp);
   }
   else
   {
     printf("\n %d:is Not Strong Number",temp);
   }
    return 0;
}
