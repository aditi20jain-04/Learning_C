#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2.0;   
    }
    else if (units <= 200) {
        bill = 100 * 2.0 + (units - 100) * 4.0;   
    }
    else {
        bill = 100 * 2.0 + 100 * 4.0 + (units - 200) * 6.0;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}