#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum of first %d odd numbers = %d", n, n * n);

    return 0;
}