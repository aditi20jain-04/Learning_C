#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n-3; i++)
    {
        if(i%2!=0)
        {
            for(j=1; j<=i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=1; i<=n-2; i++) 
     {
       printf("*"); 
     }
     printf("\n");
     for(j=1; j<=n; j++) 
     {
       printf("*"); 
     }  
    for(i=n-3; i>=1; i--)
    {
        if(i%2!=0)
        {
            for(j=1; j<=i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}