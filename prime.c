
//Check whether a number is prime or not.

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
        printf("Given number is Prime.\n");
    else
        printf("Given number is NOT Prime.\n");

    return 0;
}
