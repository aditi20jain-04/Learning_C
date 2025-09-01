#include <stdio.h>

int main() {
    int days;
    float fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0) {
        fine = 0;
    }
    else if (days <= 5) {
        fine = days * 1.0;   
    }
    else if (days <= 10) {
        fine = days * 2.0;  
    }
    else {
        fine = days * 5.0;   
    }

    printf("Library fine = Rs. %f\n", fine);

    return 0;
}