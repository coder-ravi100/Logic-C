/*check whether a number is Odd or Even*/
/*Check  Whether a number is positive or Negative Or Zero*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number  :");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("\n The Number is Odd :%d",num);
    }
    else
    {
       printf("\n The Number is Even :%d",num); 
    }
    printf("\n----------------------------------------");
    if (num > 0)
    {
        printf("\n The Number is Positive :%d",num);
    }
    else if (num < 0)
    {
        printf("\n The Number is Negative :%d",num);
    }
    else
    {
        printf("\n The Number is Zero :%d",num);
    }
    return 0;
}