#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i, j, n, isDoiXung=1;
    puts("Nhap vao xau:");
    gets(s);
    n=strlen(s);
    for(i=0; i<=n/2; i++)
        if(s[i]!=s[n-1-i]){
            isDoiXung=0;
            break;
        }
    if(isDoiXung) puts("Xau doi xung");
    else puts("Xau khong doi xung");
    return 0;
}
