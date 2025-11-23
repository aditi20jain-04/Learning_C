#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   
}
int main() {
    struct Student s[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter name, roll, marks of student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    struct Student topper = getTopStudent(s, 5);
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll: %d\n", topper.roll);
    printf("Marks: %.2f\n", topper.marks);
    return 0;
}
