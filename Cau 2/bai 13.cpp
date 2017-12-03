#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int n, dem=0;
    puts("Nhap vao xau: ");
    gets(s);
    n=strlen(s);
    int i,j, ok;
    for(i=0;i<n;i++){
        ok=1;
        for(j=0; j<i; j++) if(s[i]==s[j]){
            ok=0;
            break;
        }
        if(ok&&s[i]!=' ') dem++;
    }
    printf("Xau co %d ky tu", dem);
}
