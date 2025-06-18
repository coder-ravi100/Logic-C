#include<stdio.h>
int a = 100; // Global variable

void show() {
    printf("a = %d\n", a); // ✅ Accessible here
}

int main() {
    printf("a = %d\n", a); // ✅ Accessible here
    show();
    return 0;
}
