#include <stdio.h>
#include <ctype.h>  

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (!in) {
        printf("Error: input.txt not found!\n");
        return 0;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out); 
    }

    fclose(in);
    fclose(out);

    printf("Conversion complete! Check output.txt\n");
    return 0;
}
