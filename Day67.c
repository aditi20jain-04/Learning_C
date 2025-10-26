#include <stdio.h>
int main() {
    int m, n, i=0, j=0, k=0, a[100], b[100], c[200];
    scanf("%d", &m);
    for(i=0;i<m;i++) scanf("%d",&a[i]);
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    i=0;
    while(i<m && j<n) c[k++] = (a[i]<b[j]) ? a[i++] : b[j++];
    while(i<m) c[k++] = a[i++];
    while(j<n) c[k++] = b[j++];
    for(i=0;i<m+n;i++) printf("%d ", c[i]);
}
