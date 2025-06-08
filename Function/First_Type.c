/*Function Type 1: With Return Type and With Argument*/

/*Meaning:
Function return karega koi value
Function argument accept karega
*/
#include<stdio.h>
int sum(int a, int b)//argument
{
    int result;
    return result = a+b;//Yaha Sirf Function Calculate karta 
}
int sub(int x, int y)
{
    int result;
    return result = x - y;
}
int mul(int w, int z)
{
    int result;
    return result = w * z;
}
int div(int s, int t)
{
    int result;
    return result = s / t;
}
int main()
{
    int num1,num2,add,minus,multiply,division;
    printf("\n Enter number 1 :");//10
    scanf("%d",&num1);
    printf("\n Enter number 2 :");//20
    scanf("%d",&num2);

    add = sum(num1,num2);//argument
    minus = sub(num1,num2);
    multiply = mul(num1,num2);
    division = div(num1,num2);


    printf("\n The Sum is :%d",add);
    printf("\n The Sub is :%d",minus);
    printf("\n The Mul is :%d",multiply);
    printf("\n The Div is :%d",division);

    return 0;
}
