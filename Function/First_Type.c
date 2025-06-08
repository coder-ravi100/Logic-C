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
int main()
{
    int num1,num2,add;
    printf("\n Enter number 1 :");//10
    scanf("%d",&num1);
    printf("\n Enter number 2 :");//20
    scanf("%d",&num2);

    add = sum(num1,num2);//argument
    printf("\n The Sum is :%d",add);
    return 0;
}
/*Logic:

Function value return karega.

Function ke parameter (argument) se values pass hongi.

Input user se main() function mein liya jayega.

Function bas calculation karke result return karega.

Use: Jab calculation karna ho aur answer chahiye*/
