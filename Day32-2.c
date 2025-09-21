#include <stdio.h>

int main() {
    int num, digit, count[10] = {0}, i, max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit that occurs most: %d (occurs %d times)\n", result, max);

    return 0;
}