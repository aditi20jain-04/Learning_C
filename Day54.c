#include <stdio.h>

int main() {
    int n, x, total, leftSum;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    total = n * (n + 1) / 2;  // sum from 1 to n
    
    for(x = 1, leftSum = 0; x <= n; x++) {
        leftSum += x;  // sum from 1 to x
        if(leftSum == total - leftSum + x) {
            printf("%d\n", x);
            return 0;
        }
    }
    
    printf("-1\n");
    return 0;
}
