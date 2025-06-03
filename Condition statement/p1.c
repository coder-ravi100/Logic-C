/*Chech Wether a number is Positive Negative Neutral */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num > 0){
        printf("\n %d Number is Positive",num);
    }
    else if(num < 0){
        printf("\n %d Number is Negative",num);
    }
    else{
        printf("\n %d Number is Neutral",num);
    }
    return 0;
}