/*print table of a number [e.g 5X1=5] */
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the Number :");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
       printf("\n %d X %d = %d",num,i,num*i);
    }
    return 0;
}
/*Dry Run
Num=10
<=10 num = 10  * i=1 = 10
<=9  num = 10  * i=2 = 20
<=8  num = 10  * i=3 = 30
<=7  num = 10  * i=4 = 40
<=6  num = 10  * i=5 = 50
<=5  num = 10  * i=6 = 60
<=4  num = 10  * i=7 = 70
<=3  num = 10  * i=8 = 80
<=2  num = 10  * i=9 = 90
<=1  num = 10  * i=10 = 100
 */