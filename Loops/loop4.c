/*Print sum of 1 to N number*/
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("\n Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum = sum + i;
       // printf(" %d",sum);
    }
    printf("The Sum Is :%d",sum);
    return 0;
}