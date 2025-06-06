
/*Function Type 2: With Return Type and Without Argument*/

/*Meaning:
Function kuch return karega
Lekin koi argument nahi lega*/
#include<stdio.h>
// Function with return but no argument
int add()//blank Argument
{
    int n1,n2,sum;
    printf("\n Enter Number 1 :");//20
    scanf("%d",&n1);
    printf("\n Enter Number 2 :");//40
    scanf("%d",&n2);
    return sum = n1 + n2;
    
}
int main()
{
    int number;
    number = add();//Blank Argument and call function
    printf("\n Addition is :%d",number);
}
/*Dry Run
s
n1=20
n2=20
function call by function
return sum = n1+n2*/