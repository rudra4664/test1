#include <stdio.h>

biggest2() 
{
    int num1, num2;
    
    printf("Enter first numbr: ");
    scanf("%d", &num1);
    
    printf("Enter second numbr: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("The biggest number is: %d\n", num1);
    } else {
        printf("The biggest number is: %d\n", num2);
    }
    
    // return 0;
}

