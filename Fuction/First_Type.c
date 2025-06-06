/*Function Type 1: With Return Type and With Argument*/
/*📘 Meaning:
Function return karega koi value

Function argument accept karega

*/
#include<stdio.h>
// Function with return and argument
int findsquare(int num)
{
    return num * num;
}
int main()
{
    int number , result;
    printf("\n Enter The Number :");
    scanf("%d",&number);

    result = findsquare(number); // Function call
    printf("\n Square of %d is %d ",number,result);
    return  0;
}
/* Dry Run:
Input: 5

Call: findSquare(5)

Return: 25

Output: Square of 5 is 25*/