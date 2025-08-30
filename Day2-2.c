#include <stdio.h>
#define PI 3.14159   

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle = %f", area);
    printf("Circumference of the circle = %f", circumference);

    return 0;
}
