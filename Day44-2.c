#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]; i++)
        if(str[i]==' ') str[i]='-';

    printf("%s", str);
    return 0;
}