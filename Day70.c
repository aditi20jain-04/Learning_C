#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    gets(s); 

    s[0] = toupper(s[0]);  
    for(int i = 1; s[i]; i++)
        s[i] = tolower(s[i]);  

    puts(s);
    return 0;
}
