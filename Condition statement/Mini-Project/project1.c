/*Simple Calculator Using If Else*/
#include<stdio.h>
int main()
{
    int num1,num2,ans;
    printf("\n Enter Num1:");
    scanf("%d",&num1);
    printf("\n Enter Num2:");
    scanf("%d",&num2);

    char operators ,ch='%';
    printf("Press Symbol [+][-][*][/][%]:");
    scanf(" %c",&operators);
    if (operators == '+')
    {
        printf("\n Addition is:%d",ans=num1+num2);
    }
    else if (operators == '-')
    {
       printf("\n Subtraction is :%d",ans=num1-num2);
    }
    else if (operators == '*')
    {
        printf("\n Multiplication is :%d",ans=num1*num2);
    }
    else if (operators == '/')
    {
        printf("\n Division is :%d",ans=(float)num1/(float)num2);
    }
     if (operators == '%')
        {
            if (ans%2!=0)
                {
                     printf("\n Remainder is :%c",ans=num1%num2);
                }  
        }
        else
        {
             printf("\n Invalid Symbol");
        }
    return 0;
}