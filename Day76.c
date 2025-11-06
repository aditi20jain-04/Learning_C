#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], ch;

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if (!fp) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
