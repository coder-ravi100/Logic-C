/*Find The Greatest Among Three Number*/
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("\n Enter Number 1 :");
    scanf("%d",&n1);
    printf("\n Enter Number 2 :");
    scanf("%d",&n2);
    printf("\n Enter Number 3 :");
    scanf("%d",&n3);
    if (n1 >= n2 && n1 >= n3)
    {
       printf("\n Greatest Number :%d",n1);
    }
    else if (n2 >= n1 && n2 >= n3)
    {
         printf("\n Greatest Number  :%d",n2);
    }
    else
    {
        printf("\n Greatest Number  :%d",n3);
    }
    return 0;
}