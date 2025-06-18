#include<stdio.h>
int main() {
    for (int i = 0; i < 3; i++) {
        printf("%d\n", i); //  OK
    }
    // printf("%d", i);  Error - i not declared in this scope
    return 0;
}
