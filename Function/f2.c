/*write a function to find square of number(withouth return with argumen) */
#include<stdio.h>
int square(int num)
{
    int sq = num * num;
     printf("\nSquare of :%d",sq);
}
int main()
{
    int num,result;
    printf("\n Enter the number :");
    scanf("%d",&num);
    result=square(num);
    return 0;
}