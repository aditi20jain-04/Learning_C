#include <stdio.h>

int main() {
    char s[100]; int i;
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z') s[i]-=32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
    printf("%s",s);
}