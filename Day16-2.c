#include <stdio.h>
int main ()
{
    int t, n, r, a=0; 
    printf("Enter the number: ");
    scanf ("%d" ,&n);
    t=n;
    while (n > 0) {
    r= n%10;
    a= (a*10) + r;
    n= n/10;
    }
   if (t==a)
   printf("Palindrome number");
   else
   printf("Not palindrome");
    return 0;
}