#include <stdio.h>

int main() {
    int n, k, i, j, maxSum = -1000000;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    for(i = 0; i <= n - k; i++) {
        int sum = 0;
        for(j = i; j < i + k; j++)
            sum += arr[j];
        if(sum > maxSum)
            maxSum = sum;
    }
    
    printf("Maximum sum of subarray of size %d: %d\n", k, maxSum);
    return 0;
}