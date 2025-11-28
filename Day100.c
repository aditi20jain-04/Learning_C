#include <stdio.h>
struct Student {
    int roll;
    float marks;
};
int main() {
    struct Student s;         
    struct Student *ptr;       
    ptr = &s;                  
    ptr->roll = 21;
    ptr->marks = 89.5;
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
