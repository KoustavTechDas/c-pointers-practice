#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x; // ptr holds x's address
    printf("Value of x: %d\n", x); // Prints 10
    printf("Address of x: %p\n", (void*)&x); // Prints x’s address
    printf("Value at ptr: %d\n", *ptr); // Prints 10 (dereferencing ptr)
    *ptr = 20; // Change x via ptr
    printf("New value of x: %d\n", x); // Prints 20
    return 0;
}
