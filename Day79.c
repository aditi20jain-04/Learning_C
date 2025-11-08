#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp);

    avg = (float)sum / count;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);

    return 0;
}
