#include <stdio.h>

int main()
{
    printf("Enter the number: ");
    int number;
    scanf("%d", &number);

    int factorial = 1;
    for (int i = number; i > 1; i--)
    {
        factorial = factorial * i; //factorial*=i

    }

    printf("Factorial of %d is %d",number, factorial);
    
    return 0;
}