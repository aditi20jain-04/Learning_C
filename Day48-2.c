#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter sentence: ");
    gets(s);
    
    for (char *p = s, *q = s; *p; p = q) {
        while (*q && *q != ' ') q++;
        for (char *r = q - 1; p < r; p++, r--) {
            char t = *p; *p = *r; *r = t;
        }
        while (*q == ' ') q++;
    }
    
    printf("%s\n", s);
    return 0;
}