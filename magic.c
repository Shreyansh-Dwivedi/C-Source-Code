#include<stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

// Function to print Fibonacci series
void printFibonacci(int n)
{
    if (n <= 0)
    {
        printf("Invalid input. Number of terms should be greater than zero.");
        return;
    }

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

// Main function
int main()
{
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printFibonacci(num);

    return 0;
}
