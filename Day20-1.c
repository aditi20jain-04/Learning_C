#include <stdio.h>

int main() {
    int n, dig, p = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        dig = n % 10;
        if (dig % 2 != 0) {   
            p *= dig;
        }
        n /= 10;
    }

    printf("Product of odd digits = %d\n", p);
    return 0;
}