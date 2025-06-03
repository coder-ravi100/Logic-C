/*print Even Number from  1 to N
  print Odd Number from 1 to N*/
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i!=0){
            printf("\n odd %d",i);
        }
        else{
            printf("\n Even %d",i);
        }
    }
    return 0;
}

