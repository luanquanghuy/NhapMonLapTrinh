#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[100], ch;
    int n, i, j;
    puts("Nhap vao xau:");
    gets(s);
    n=strlen(s);
    puts("Nhap ky tu can xoa:");
    scanf("%c", &ch);
    for(i = 0; i < n; i++){
        if(toupper(s[i])==toupper(ch)) {
            for(j=i+1; j<=n; j++) s[j-1] = s[j];
            n--;
        }
    }
    puts(s);
}
