#include <stdio.h>

int main() {
    float a, b, c, D;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0) {
        printf("Roots are Real and Distinct\n");
    }
    else if (D == 0) {
        printf("Roots are Real and Equal\n");
    }
    else {
        printf("Roots are Imaginary\n");
    }

    return 0;
}
