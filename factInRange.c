#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int start, end;

    // Input the range from the user
    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Print factorials in the given range
    for (int i = start; i <= end; ++i) {
        printf("Factorial of %d: %lld\n", i, factorial(i));
    }

    return 0;
}
    