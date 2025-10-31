#include <stdio.h>

int main() {
    int n, i, x = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        x ^= a[i] ^ i;  
    }
    printf("%d", x);
    return 0;
}
