/*print squares of  1 to N number*/
#include<stdio.h>
int main()
{
    int num,sq,i,ans;
    //meine sq ko num mein initilize kiya 
    printf("\n Enter the Number:");
    scanf("%d",&num);//10
    for ( i = 1; i <=num; i++)
    {
       sq =  i * i;//1 4 9 16 25 
       printf("\n%d Square :%d",i,sq); //i ka square nikala
    }

    //-----------------------------------------------
      /* sq = num;  // num ki value sq mein daali
       ans = sq * sq;  // square nikala
       printf("%d",ans);*/
       
    //-----------------------------------------------
     /*for ( sq = 1; sq <= num; sq++)
        {
            ans =  sq * sq;
            printf("  %d",ans);
        }*/
    return 0;
}
/*Dry Run
num = 10
i=1 num = 10 True = i=1 * i=1 = 1
i=2 num = 10 True = i=2 * i=2 = 4
i=3 num = 10 True = i=3 * i=3 = 9
i=4 num = 10 True = i=4 * i=4 = 16
i=5 num = 10 True = i=5 * i=5 = 25
i=6 num = 10 true = i=6 * i=6 = 36
i=7 num = 10 True = i=7 * i=7 = 49
i=8 num = 10 True = i=8 * i=8 = 64
i=9 num = 10 True = i=9 * i=9 = 81
i=10 num = 10 True = i=10 * i=10 = 100
i=11 num = 10 False*/