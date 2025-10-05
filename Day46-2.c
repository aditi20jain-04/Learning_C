#include <stdio.h>
int main() {
    char s[100]; int f[26]={0}, i;
    gets(s);
    for(i=0; s[i]; i++) {
        if(s[i]>='a'&&s[i]<='z') {
            if(f[s[i]-'a']++) { printf("%c", s[i]); return 0; }
        }
    }
    printf("No repeating letter");
}