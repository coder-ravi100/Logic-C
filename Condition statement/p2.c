/* Check in an Even And Odd number
Even--  0 2 4 6 8 10..
Odd---1 3 5 7 9 11..*/
#include<stdio.h>
int main(){
    int num;
    printf("\n Enter the number :");
    scanf("%d",&num);
    
    if(num%2!=0){
        printf("\nIs Even Number :",num);
       
    }
    else{
        printf("\nIs Odd Number :",num);
    }
    return 0;
}
