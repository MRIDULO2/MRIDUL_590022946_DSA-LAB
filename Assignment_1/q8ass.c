// 8. Write a C program to demonstrate the use of union by storing integer, float, and character data and explain memory sharing.
#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;
    d.i = 10;
    printf("Integer: %d\n", d.i);
    d.f = 3.14;
    printf("Float: %.2f\n", d.f);
    d.c = 'A';
    printf("Character: %c\n", d.c);
    printf("\nAll members share the same memory location\n");
    printf("Size of union: %lu bytes\n", sizeof(d));
    return 0;
}
