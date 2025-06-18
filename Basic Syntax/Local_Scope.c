/*| Type               | Meaning (Hindi)                                                      | Use kaha hota hai |
| ------------------ | -------------------------------------------------------------------- | ----------------- |
| **Local Scope**    | Block ya function ke andar ka area                                   | Functions, loops  |
| **Global Scope**   | Pure program mein kahin bhi use ho sakta hai                         | Function ke bahar |
| **Block Scope**    | `{}` ke andar ka variable sirf wahi kaam karega                      | if, loop, etc.    |
| **Function Scope** | Function ke andar declared variable usi function mein kaam karta hai | Sabhi functions   |
*/
#include<stdio.h>
int main() {
    int a = 10;  // Local to main
    printf("%d", a); // ✅ Accessible here
    return 0;
}
// printf("%d", a); ❌ Error - a not declared in this scope
