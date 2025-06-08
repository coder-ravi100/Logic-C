/*Type 3: Without Return Type, With Argument*/

/*Iska matlab:
Function kuch return nahi karta (void use hota hai)
Lekin function input/argument accept karta hai
*/
#include<stdio.h>
void sum(int a, int b) 
{
    int result = a + b;
    printf("\nSum is: %d", result);
}
int main()
{
 int num1, num2;
    printf("Enter number 1: "); // Example: 20
    scanf("%d", &num1);
    printf("Enter number 2: "); // Example: 10
    scanf("%d", &num2);

    sum(num1, num2);   // → sum(20, 10) → prints 30
    
    return 0;
}
/* Logic:

Function kuch return nahi karega (void).

Value argument ke through pass hogi.

Calculation function ke andar hoga, aur output direct printf() se dikhaya jayega.

 Use: Jab sirf output dikhana ho, result return nahi chahiye.*/