/*Level 3 Else If
1.  Find Grade Base On Marks
90+A , 80+B , 70+C , 60+D , Else Fails*/
#include<stdio.h>
int main(){
    int marks;
    up:
    printf("\nEnter the Marks :");
    scanf("%d",&marks);
    
    if (marks >= 90)
    {
        printf("\nA Grade");
    }
    else if (marks >= 80)
    {
        printf("\nB Grade");
    }
    else if (marks >= 60)
    {
        printf("\nC Grade");
    }
    else
    {
        printf("\nYeh Banda Too Fail Ho Gaya");
    }goto up;
    return 0;
}