#include <stdio.h>
#include <string.h>

int main() {
    char s[]="hello";
    for(int i=strlen(s)-1;i>=0;i--) printf("%c",s[i]);
}