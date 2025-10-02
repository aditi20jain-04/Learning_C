#include <stdio.h>
#include <string.h>

int main() {
    char s[]="madam";
    int i, n=strlen(s), f=1;
    for(i=0;i<n/2;i++) if(s[i]!=s[n-i-1]) f=0;
    printf(f?"Palindrome":"Not Palindrome");
}