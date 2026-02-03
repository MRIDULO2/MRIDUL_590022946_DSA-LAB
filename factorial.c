
//Program to find the Factorial of a number using iterative and recursive method.
#include <stdio.h>

int fact_iterative(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++){
        fact*=i;
}
    return fact;
}

int fact_recursive(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n * fact_recursive(n-1);
}

int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The Factorial using Iterative method is: %d\n", fact_iterative(num));
    printf("The Factorial using Recursive method is: %d\n", fact_recursive(num));
}

