/*Sum Of Digits*/
#include<stdio.h>
int main()
{
    int num,digit=0;
    printf("Enter the Number :");
    scanf("%d",&num);
    while(num!=0)
    {
        num = num  / 10;
        digit++;
    }
    printf("\n Digits : %d",digit);
}
/*Dry Run
Num = 123

12 = 123/10
digit = 0+1=1

1 = 12 / 10
digit = 1+2=3

*/