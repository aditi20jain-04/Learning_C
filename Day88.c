#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW
} Color;

int main() {
    Color colors[] = {RED, GREEN, BLUE, YELLOW};
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    int n = sizeof(colors) / sizeof(colors[0]);

    for(int i = 0; i < n; i++) {
        printf("%s = %d\n", names[i], colors[i]);
    }
    
    return 0;
}
