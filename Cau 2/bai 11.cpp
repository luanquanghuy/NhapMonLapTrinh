#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int n;
    puts("Nhap vao xau: ");
    gets(s);
    n=strlen(s);
    char ch[n];
    int dem[n], nKyTu=0, i, j, exist, demMax;
    // xet tung ky tu trong xau s[]
    for(i = 0; i<n; i++){
        exist=0;
        // kiem tra xem ky tu thu i trong xau s[] da co trong xau ch[] chua
        for(j=0; j<nKyTu; j++){
                // neu ky tu s[i] trung voi ky tu ch[j] thi tang +1 so lan xuat hien
            if(s[i]==ch[j]){
                exist=1;
                dem[j]++;
                break;
            }
        }
        // neu no ko trung thi them vao mang ch[]
        if(!exist){
            ch[nKyTu]=s[i];
            dem[nKyTu]=1;
            nKyTu++;
        }
    }
    demMax=dem[0];
    for(i=1; i<nKyTu; i++){
        if(dem[i]>demMax) demMax=dem[i];
    }
    for(i=0; i<nKyTu; i++){
        if(dem[i]==demMax) printf("Ky tu '%c' xuat hien %d lan\n", ch[i], dem[i]);
    }
}
