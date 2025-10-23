#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    for(i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(j = i + 1; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    
    return 0;
}
