
/*Function Type 2: With Return Type and Without Argument*/

/*Meaning:
Function kuch return karega
Lekin koi argument nahi lega*/
#include<stdio.h>
// Function with return but no argument
int add()
{
    int n1,n2,result;
    printf("\n Addition");
    printf("\n Enter Number 1:");
    scanf("%d",&n1);
    printf("\n Enter Number 2:");
    scanf("%d",&n2);
    return result = n1 + n2;
}
int sub()
{
    int n1,n2,result;
    printf("\n Subtraction");
    printf("\n Enter Number 1:");
    scanf("%d",&n1);
     printf("\n Enter Number 2:");
    scanf("%d",&n2);
    return result = n1 - n2;   
}
int mul()
{
    int n1,n2,result;
    printf("\n Multiplication");
    printf("\n Enter Number 1:");
    scanf("%d",&n1);
     printf("\n Enter Number 2:");
    scanf("%d",&n2);
    return result = n1 * n2;   
}
int div()
{
    int n1,n2,result;
    printf("\n Division");
    printf("\n Enter Number 1:");
    scanf("%d",&n1);
     printf("\n Enter Number 2:");
    scanf("%d",&n2);
    return result = n1 / n2;   
}
int main()
{
    int num1,num2,num3,num4;
    num1 = add();
    num2 = sub();
    num3 = mul();
    num4 = div();
    printf("\n The Addition Is : %d",num1);
    printf("\n The Subtraction Is : %d",num2);
    printf("\n The Multiplication Is : %d",num3);
    printf("\n The Division Is : %d",num4);
    return 0;
}
/*Dry Run
s
n1=20
n2=20
function call by function
return sum = n1+n2*/