#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {
    int r;
    scanf("%d", &r);

    switch (r) {
        case ADMIN: printf("Welcome, Admin! Full access granted.\n"); break;
        case USER:  printf("Hello User! Limited access.\n"); break;
        case GUEST: printf("Hi Guest! View-only mode.\n"); break;
        default:    printf("Invalid role.\n");
    }
}
