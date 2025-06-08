
/*Function Type 2: With Return Type and Without Argument*/

/*Meaning:
Function kuch return karega
Lekin koi argument nahi lega*/
#include<stdio.h>
// Function with return but no argument
int add()
{
    int n1,n2,result;
    printf("\n Enter Number 1:");
    scanf("%d",&n1);
    printf("\n Enter Number 2:");
    scanf("%d",&n2);
    return result = n1 + n2;
}
int main()
{
    int num1;
    num1 = add();
   
    printf("\n The Addition Is : %d",num1);
    return 0;
}
/*Logic:

Function value return karega, lekin koi argument pass nahi karega.

Input lena, calculation karna sab function ke andar hoga.

Final result return karke main() mein store hoga.

Use: Jab function khud input le aur result de*/
