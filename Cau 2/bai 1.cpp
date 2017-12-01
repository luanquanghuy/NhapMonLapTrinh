#include <stdio.h>
#include <string.h>
// ham tra ve do dai cua xau
char* xoaSpace2Ben(char* s){
    int i, nSpaceL=0, nSpaceR=0;
    int n = strlen(s);
    // do dai khoang trang ben trai
    for(int i=0; i<n; i++){
        if(s[i]==' ') nSpaceL++;
        else break;
    }
    // do dai khoang trang ben phai
    for(int i=n-1; i>=0; i--){
        if(s[i]== ' ') nSpaceR++;
        else break;
    }
    for(int i=nSpaceL; i<n; i++) s[i-nSpaceL]=s[i];
    s[n-nSpaceR-nSpaceL]=s[n];
    return s;
}
int main(){
    char s[100];
    printf("Nhap vao xau: ");
    gets(s);
    puts("Chuoi sau khi loai bo khoang trang 2 ben :");
    printf("\"%s\"",xoaSpace2Ben(s));
}
