#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];int c[256]={0},i;
    gets(a);gets(b);
    if(strlen(a)!=strlen(b)) 
    return printf("Not anagrams");
    for(i=0;a[i];i++) 
    c[a[i]]++,c[b[i]]--;
    for(i=0;i<256;i++) 
    if(c[i]) 
    return printf("Not anagrams");
    printf("Anagrams");
}