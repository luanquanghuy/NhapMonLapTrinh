#include <stdio.h>
#include <string.h>
char* xuLyChuoi(char* s){
    int i, n=strlen(s);
    for(i=0;i<n;i++){
        if((s[i-1]==' '||i==0)&&s[i]>'a'&&s[i]<'z') s[i]-=32;
    }
    return s;
}
int main(){
    char s[100];
    puts("Nhap vao xau:");
    gets(s);
    puts("Chuoi sau khi xu ly la:");
    puts(xuLyChuoi(s));
}
