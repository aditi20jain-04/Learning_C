#include <stdio.h>

int main() {
    FILE *s, *d;
    char sf[50], df[50], ch;

    printf("Source file: ");
    scanf("%s", sf);
    printf("Destination file: ");
    scanf("%s", df);

    s = fopen(sf, "r");
    if (!s) return printf("Source not found!\n"), 1;
    d = fopen(df, "w");

    while ((ch = fgetc(s)) != EOF)
        fputc(ch, d);

    fclose(s);
    fclose(d);
    printf("Copied successfully!\n");
}
