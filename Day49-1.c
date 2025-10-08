#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    
    printf("Enter your full name: ");
    scanf("%[^\n]", name);  
    
    printf("Initials: %c", toupper(name[0]));
    
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf(".%c", toupper(name[i + 1]));
        }
    }
    
    printf("\n");
    return 0;
}