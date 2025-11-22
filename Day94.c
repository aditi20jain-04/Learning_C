#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void display(struct Student s) {
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct Student s1 = {"Aditi", 21, 92.5};
    display(s1);  
    return 0;
}
