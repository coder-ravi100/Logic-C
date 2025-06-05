/*Check  Pallindrome Number*/
#include<stdio.h>
int main()
{
    int num,remainder,reversed=0;
    printf("\n Enter The Number :");
    scanf("%d",&num);
    int temp = num;
    while (num!=0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    if (reversed == temp)
    {
        printf("\n Bro Pallindrome hai :%d",temp);
    }
    else
    {
         printf("\n Bro Pallindrome Nahi hai :%d",temp);
    }
    return 0;
}
/*Dry Run Code
Num = 121
step 1
1  = 121 % 10
11 = (0*10+1)
12 = 123 / 10

step2
2  = 12 % 10
12 = (1*10+2)
1  = 12 / 10

step 3
1  = 1 % 10
31 = (3*10+1)
0 = 1 / 10
*/