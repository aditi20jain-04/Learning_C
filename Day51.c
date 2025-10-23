#include <stdio.h>

int main() {
    int n, target, i, first = -1, last = -1;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;
            last = i;
        }
    }
    
    printf("First occurrence index: %d\n", first);
    printf("Last occurrence index: %d\n", last);
    
    return 0;
}