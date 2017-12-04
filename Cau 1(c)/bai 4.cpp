#include <stdio.h>
int main(){
    int k, i, j, dem;
    printf("Nhap so nguyen duong k:");
    scanf("%d", &k);
    printf("%d so nguyen to dau tien la:", k);
    for(i=1; k>0; i++){
        dem=0;
        for(j=1; j<=i; j++) if(i%j==0) dem++;
        if(dem==2){
            printf("\n%d", i);
            k--;
        }
    }
}
