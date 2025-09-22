#include <stdio.h>

int main() {
    int n, i, key, low, high, mid;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d sorted elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Found at position %d\n", mid+1);
            return 0;
        }
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Not found\n");
    return 0;
}