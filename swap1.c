
//Program to Swap two number using a temporary variable.

#include<stdio.h>

int main(){
    int a=0, b=0, temp=0;

    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);

    printf("Before Swapping: a=%d, b=%d\n", a, b);

    temp=a;
    a=b;
    b=temp;
    printf("After Swapping: a=%d, b=%d\n", a, b);
    
    return 0;
}

