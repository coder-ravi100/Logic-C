/*Type 3: Without Return Type, With Argument*/

/*Iska matlab:
Function kuch return nahi karta (void use hota hai)
Lekin function input/argument accept karta hai
*/
#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter Number :");
    scanf("%d",&number);//11

    //Function Call With Argument
    checkEvenOdd(number);
    return 0;
}