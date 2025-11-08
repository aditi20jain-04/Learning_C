#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n;
    float marks;

    fp = fopen("students.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Name Roll Marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF)
        printf("%s %d %.2f\n", name, roll, marks);
    fclose(fp);
}
