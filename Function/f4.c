/*write a function to find the maximum of two numbers(with return and with argument)*/
#include<stdio.h>

int Maximum(int a, int b)
{
    int ans = (a > b) ? a : b;
    return ans;  // ✅ sahi value return karo
}

int main()
{
    int num1, num2, result;

    printf("\n Enter The Number1 :");
    scanf("%d", &num1);

    printf("\n Enter The Number2 :");
    scanf("%d", &num2);

    result = Maximum(num1, num2);

    printf("\n Max Number is: %d\n", result);
    return 0;
}
