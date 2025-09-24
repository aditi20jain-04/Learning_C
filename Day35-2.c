#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    k = k % n;

    for (i = 0; i < n; i++)
        printf("%d ", arr[(n - k + i) % n]);

    return 0;
}