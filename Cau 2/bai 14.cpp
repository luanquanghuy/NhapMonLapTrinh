#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100], ch;
    int n, dem=0, i;
    puts("Nhap vao xau:");
    gets(s);
    puts("Nhap vao ky tu can dem:");
    scanf("%c", &ch);
    n=strlen(s);
    for(i=0; i<n; i++) if(toupper(s[i])==toupper(ch)) dem++;
    printf("Ky tu '%c' xuat hien %d lan", ch, dem);
}
