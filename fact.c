#include <stdio.h>

factorial() 
{
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Error handling for negative numbers
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return 1; // Exit program with error code 1
    }

    // Calculating factorial
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", num, factorial);
    // return 0;
}

