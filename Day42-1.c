#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100]; int v=0,c=0; 
    fgets(s,100,stdin);
    for(int i=0;s[i];i++)
        if(isalpha(s[i]))
            (strchr("AEIOUaeiou",s[i]))?v++:c++;
    printf("Vowels=%d Consonants=%d",v,c);
}