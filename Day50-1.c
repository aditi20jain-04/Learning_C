#include <stdio.h>

int main() {
    char date[20], newdate[20];
    int d, y;
    scanf("%d/04/%d", &d, &y);
    sprintf(newdate, "%02d-Apr-%d", d, y);
    printf("%s", newdate);
    return 0;
}