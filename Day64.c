#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s); // Input string

    int n = strlen(s);
    int max_len = 0;

    for(int i = 0; i < n; i++) {
        int freq[256] = {0}; 
        int len = 0;

        for(int j = i; j < n; j++) {
            if(freq[(int)s[j]] == 1) 
                break; 
            freq[(int)s[j]] = 1;
            len++;
        }

        if(len > max_len)
            max_len = len;
    }

    printf("%d\n", max_len);
    return 0;
}
