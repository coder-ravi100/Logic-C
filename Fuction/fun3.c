/* With return type:
Function kuch value return karega (like int, float, etc.)
---------------------------------------------------------
Without argument:
Function kisi bhi value ko input mein nahi lega from main()
means-->Function kuch return karega par main() se koi data nahi lega.
--------------------------------------------------------------------
Type 2 With Return type and Without Argument
*/
#include<stdio.h>

float div()
{
    int n1,n2;
    printf("\n Enter the number :");
    scanf("%d",&n1);
    printf("\n Enter the number :");
    scanf("%d",&n2);
    float ans = (float)n1/(float)n2;
    return ans;
}
int main()
{
    float ans;
    ans = div();
    printf("\n The  Division :%.2f",ans);
    return 0;
}