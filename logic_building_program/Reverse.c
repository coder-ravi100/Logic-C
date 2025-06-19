/*Reverse a Number*/
#include<stdio.h>
int main()
{
    int num,remainder,reversed=0;
    printf("Enter the a number :");
    scanf("%d",&num);
    while(num!=0)
    {
        remainder = num % 10;
        reversed = reversed * 10 +  remainder;
        num = num /10;
    }
    printf("\n %d The Reverse Number ",reversed);
    return 0;
}
/*Dry Run 
remainder = num % 10;
reversed = reversed * 10 +  remainder;
num = num /10;
--------------------------------------
num = 123

 3 = 123 % 10
 13 = (0*10+3)
 12 = 123 / 10

 2  = 12 % 10
 12 = (1*10+2)
 1  = 12 / 10

 1  = 1 % 10
 31 = (3*10+1)
 0  = 0/10
 Final = 321
*/