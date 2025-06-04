//Type 1: With Return Type & With Argument

/*Matlab: Function input bhi leta hai aur result return bhi karta hai */
#include<stdio.h>
int add(int a,int b)//function declaration
{
    int ans = a+b;
    return ans;
}
int main()
{
    int n1,n2,sum;
    printf("\n Enter the number n1 :");//10
    scanf("%d",&n1);
    printf("\n Enter the number n2 :");//20
    scanf("%d",&n2);
    
    sum = add(n1,n2);//call
    printf("\n Additon is :%d",sum);
    return 0;
}