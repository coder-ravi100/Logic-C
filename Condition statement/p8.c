/*2. Check Whether a character Is Vowel And Consonant*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character :");
    scanf(" %c",&ch);
    if (ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U' 
        && ch == 'a'||ch == 'e'||ch == 'i'||ch ==  'o'||ch == 'u')
    {
       printf("\n Vowel :%d",ch);
    }
    else
    {
         printf("\n Consonent :%d",ch);
    }
    return 0;
}