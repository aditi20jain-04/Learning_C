#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n], sum[m];

    for(int i=0;i<m;i++) {
        sum[i]=0;
        for(int j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }

    for(int i=0;i<m;i++)
        printf("%d ", sum[i]);

    return 0;
}