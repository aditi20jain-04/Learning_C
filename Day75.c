#include <stdio.h>

int main() {
    FILE *f = fopen("info.txt", "a");
    char t[100];
    if (!f) return printf("File not found!\n"), 1;
    printf("Enter text: ");
    getchar();
    fgets(t, 100, stdin);
    fputs(t, f);
    fclose(f);
    printf("Added!\n");
}
