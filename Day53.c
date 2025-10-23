#include <stdio.h>

int main() {
    int n, i, sum = 0, leftSum = 0, pivot = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // total sum
    }
    
    for(i = 0; i < n; i++) {
        if(leftSum == sum - leftSum - arr[i]) {
            pivot = i;
            break; // leftmost pivot
        }
        leftSum += arr[i];
    }
    
    printf("%d\n", pivot);
    return 0;
}
