#include <stdio.h>
int main ()
{
    int n, r, a=0; 
    printf("Enter the number: ");
    scanf ("%d" ,&n);
    while (n > 0) {
    r= n%10;
    a= (a*10) + r;
    n= n/10;
    }
    printf("Reversed number: %d",a);
    return 0;
}