/*Check The Armstrong Number*/

//Armstrong Number Isse Number hote hai jiske cube ka sum diye hue number barabar ho

 /*2. Armstrong Number
(Number ke har digit ka cube (or power of digit count) leke unka sum agar number
 ke barabar ho, toh Armstrong Number hota hai. Ex: 153 → 1³ + 5³ + 3³ = 153 )*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit = 0, sum = 0, rem = 0, power;
    
    printf("\nEnter the Number : ");
    scanf("%d", &num);

    int temp = num;
    int copy = num;

    // Step 1: Count digits
    while (num != 0)
    {
        num = num / 10;
        digit++;
    }

    // Step 2: Armstrong logic
    while (temp != 0)
    {
        rem = temp % 10;
        power = (int)(round(pow(rem, digit))); 
        sum = sum + power;
        temp = temp / 10;
    }

    // Step 3: Compare
    if (sum == copy)
    {
        printf("\n%d is an Armstrong Number\n", copy);
    }
    else
    {
        printf("\n%d is Not an Armstrong Number\n", copy);
    }

    return 0;
}
