#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("input.txt", "r");

    if (!fp) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
