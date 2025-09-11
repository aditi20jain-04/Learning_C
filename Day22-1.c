#include <stdio.h>
int main ()
{
    int n, i, r, f, sum=0, o;
    printf("Enter the number: ");
    scanf("%d", &n);
    o=n;
    while (o > 0)
    {
    r = o%10;
    f=1;
    for (i=1; i<=r; i++)  
    f= f*i;
    sum= sum + f;    
    o= o/10;
    }
if (sum == n)
printf("Strong number");
else
printf("Not strong number");
    return 0;
}