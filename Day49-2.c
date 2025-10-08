#include <stdio.h>
#include <ctype.h>

int main() {
    char first[50], middle[50], last[50];
    
    printf("Enter first middle last name: ");
    scanf("%s %s %s", first, middle, last);
    
    printf("%c. %c. %s\n", toupper(first[0]), toupper(middle[0]), last);
    
    return 0;
}