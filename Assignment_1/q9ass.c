// 9. Write a C program to show the difference in memory allocation between structure and union using sizeof().
#include <stdio.h>

struct SampleStruct {
    int a;
    float b;
    char c;
};

union SampleUnion {
    int a;
    float b;
    char c;
};

int main() {
    printf("Size of Structure: %lu bytes\n", sizeof(struct SampleStruct));
    printf("Size of Union: %lu bytes\n", sizeof(union SampleUnion));
    return 0;
}
