#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq[26] = {0};
    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    for (int i = 0; s[i]; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }

    printf("Anagram");
    return 0;
}
