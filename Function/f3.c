/*write a function to find Area of circle(with return with argumen)
Formula Area=π×r×r*/
#include<stdio.h>
float Area(float r)
{
   float area = 3.14 * r * r;
   return area;
}
int main()
{
    float num,result;
    printf("\n Enter The Value:");
    scanf("%f",&num);
    result = Area(num);
    printf("\n Area of Circle :%.2f",result);
    return 0;
}