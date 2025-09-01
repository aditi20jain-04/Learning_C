#include <stdio.h>

int main() {
    float principal, rate, si, ci, amount;
    int time, i;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%d", &time);

    si = (principal * rate * time) / 100;

    amount = principal;
    for(i = 1; i <= time; i++) {
        amount = amount * (1 + rate / 100);
    }
    ci = amount - principal;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);
    printf("\nTotal Amount (with CI) = %.2f\n", amount);

    return 0;
}