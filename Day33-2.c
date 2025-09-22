#include <stdio.h>

int main() {
    int a[100], n, i, x, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d sorted numbers:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter number to insert: ");
    scanf("%d", &x);

    pos = n;
    for(i=0; i<n; i++) {
        if(a[i] > x) {
            pos = i;
            break;
        }
    }

    for(i=n; i>pos; i--)
        a[i] = a[i-1];

    a[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}