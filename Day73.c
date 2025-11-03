#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int c = 0, w = 0, l = 0, inWord = 0;

    fp = fopen("info.txt", "r");
    if (!fp) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        c++;
        if (ch == '\n') l++;
        if (isspace(ch)) inWord = 0;
        else if (!inWord) { inWord = 1; w++; }
    }

    fclose(fp);
    printf("Chars: %d\nWords: %d\nLines: %d\n", c, w, l);
    return 0;
}
