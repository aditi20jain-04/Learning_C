#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);

        printf("Enter marks of %d: ", i+1);
        scanf("%d", &s[i].marks);
    }

    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %d\n", s[maxIndex].marks);

    return 0;
}
