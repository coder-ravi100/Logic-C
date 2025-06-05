/*print Sum of Even And Odd numbers from  1 To N */
#include<stdio.h>
int main()
{
    int num,oddsum=0,evensum=0,i;
    printf("Enter The Number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if (i % 2 == 0)
        {
           evensum = evensum + i;
           //printf("\n Even Number :%d",i);
        }
        else
        {
            oddsum = oddsum + i;
            // printf("\n Odd Number :%d",i);
        }
    }
    printf("Sum of Even Numbers: %d\n", evensum);
    printf("Sum of Odd Numbers: %d\n", oddsum);
    return 0;
}