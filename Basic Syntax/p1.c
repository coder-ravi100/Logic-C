#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two number 1: ");
    scanf("%d",&a);
    printf("Enter two number 2 : ");
    scanf("%d",&b);

    //max = (a > b) ? a : b;
    max =(a > b) ? a : b;

    printf("Maximum is: %d", max);

    return 0;
}
