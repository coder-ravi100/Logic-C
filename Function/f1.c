/*basic  
write  a fuction to add and Minus two numbers(with return and with argument)*/
#include<stdio.h>
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int minus(int a, int b)
{
    int c = a - b;
    return c;
}
int main()
{
    int num1,num2,sum,sub;
    printf("\n Enter number 1 :");
    scanf("%d",&num1);
    printf("\n Enter number 2 :");
    scanf("%d",&num2);

    sum = add(num1,num2);
    sub = minus(num1,num2);

    printf("\n Addition Is :%d",sum);
    printf("\n Subtraction Is :%d",sub);
    return  0;
}