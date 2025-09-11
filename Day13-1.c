#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
        case '*': printf("%d", a*b); break;
        case '/': printf("%d", a/b); break;
        case '%': printf("%d", a%b); break;
        default:  printf("Invalid operator");
    }
    return 0;
}