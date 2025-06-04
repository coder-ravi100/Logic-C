/*Check Whether a Characters is  Uppearcase Lower Case */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Characters :");
    scanf(" %c",&ch);
    
    if(ch >= 'A' && ch <= 'Z')
        {
            printf("\n This Character is a Upper case :%c",ch); 
        } 
    else if(ch >= 'a' && ch <= 'z')
        {
             printf("\n This Character is a Lower case :%c",ch);
        }
        else 
        {
            printf("\n Invalid input");
        }
    return 0;
}