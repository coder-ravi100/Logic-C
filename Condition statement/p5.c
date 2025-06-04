/*check whether a number is Odd or Even*/
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
    return 0;
}