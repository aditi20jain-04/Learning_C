#include <stdio.h>

int main() {
    int n, i, product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            product = product * i;
    }

    printf("Product = %d", product);
    return 0;
}