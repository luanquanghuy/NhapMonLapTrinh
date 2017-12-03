#include <stdio.h>
#include <string.h>
int main(){
    char s[100], s1[50];
    int n, n1, i, j, ok, dem=0;;
    puts("Nhap vao xau S:");
    gets(s);
    n=strlen(s);
    puts("Nhap vao xau S1:");
    gets(s1);
    n1=strlen(s1);
    for(i=0; i<n; i++)
        if(s[i]==s1[0]){
            ok=1;
            for(j=1; j<n1; j++)
                if(s[i+j] != s1[j]){
                    ok=0;
                    break;
                }
            if(ok){
                dem++;
                i+=n1-1;
            }
        }
    printf("Xau S1 xuat hien %d lan trong xau S", dem);
    return 0;
}
