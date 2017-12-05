#include <stdio.h>
void soNguyenTo(int left, int right){
    int i, j, soUoc;
    printf("So nguyen to trong doan [%d,%d] la: ", left, right);
    for(i=left; i<=right; i++){
        soUoc = 0;
        for(j=1; j<=i; j++) if(i%j==0) soUoc++;
        if(soUoc==2) printf("%d\t", i);
    }
}
int main(){
    int left, right;
    printf("Nhap vao L, R: ");
    scanf("%d%d", &left, &right);
    soNguyenTo(left, right);
}
