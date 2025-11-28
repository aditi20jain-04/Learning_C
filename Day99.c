#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    float marks;
};
int main() {
    struct Student *ptr;
    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    ptr->roll = 10;
    ptr->marks = 95.2;
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    free(ptr);
    return 0;
}
