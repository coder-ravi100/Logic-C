/*Function Type 1: With Return Type and With Argument*/

/*Meaning:
Function return karega koi value
Function argument accept karega
*/
#include<stdio.h>
int  sum(int a, int b)//argument
{
    return a+b;
}
int main()
{
    int num1,num2,ans;
    printf("\n Enter number 1 :");//10
    scanf("%d",&num1);
    printf("\n Enter number 2 :");//20
    scanf("%d",&num2);
    ans = sum(num1,num2);//argument
    printf("\n The Sum is :%d",ans);
}
/* Dry Run:
Input: 5

Call: findSquare(5)

Return: 25

Output: Square of 5 is 25*/