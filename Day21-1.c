#include <stdio.h>

int main() {
    int num, first, last, temp, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;        
    temp = num;
    
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    first = temp;           

    num = num - first * multiplier - last;
    num = num + last * multiplier + first;

    printf("After swapping: %d\n", num);

    return 0;
}