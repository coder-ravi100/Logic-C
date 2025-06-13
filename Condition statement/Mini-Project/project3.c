/* project 3 : Student result generate (pass / fail with Grade)*/
#include<stdio.h>
int main()
{
    int roll;
    char name[100];
    int subject, sub1,sub2,sub3,sub4,sub5,marks,total;
    float percentage;
    printf("\nEnter the Student Name:");
    scanf("%s",name);
    printf("\nEnter the Student Roll Number:");
    scanf(" %d",&roll);
    printf("\nEnter the Student marks [0-100]:");
    printf("\n\n Mathematics:");
    scanf("%d",&sub1);//80
    printf("\n English:");
    scanf("%d",&sub2);//70
    printf("\n Science:");
    scanf("%d",&sub3);//60
    printf("\n Physics:");
    scanf("%d",&sub4);//50
    printf("\n Chemistry:");
    scanf("%d",&sub5);//70
    subject = 5;

    total = sub1+sub2+sub3+sub4+sub5;//330
    printf("\n Total Subject Marks:%d",total);
   
    percentage = ((float)total/((float)subject*100))*100;
    printf("\n Percentage:%.2f",percentage);
    
    //Check Pass/Fail condition:
    if (marks < 33)
    {
        printf("\n Fail");
    }
    else
    {
        printf("\n Pass");
    }
    return 0;
}