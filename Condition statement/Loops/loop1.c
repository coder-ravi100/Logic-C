/*Print  1 To N number*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("\n Enter The number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n%d",i);
    }
    // Reverse print for loop
    printf("\nReverse Print Loop");
    for(i=num;i>=1;i--)
    {
        printf("\n%d",i);
    }
}