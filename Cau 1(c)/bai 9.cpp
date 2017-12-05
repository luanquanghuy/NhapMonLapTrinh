#include <stdio.h>
void soPhongPhu(int left, int right){
    int i, j, sUoc;
    printf("So phong phu trong doan [%d,%d] la: \n", left, right);
    for(i=left; i<=right; i++){
        sUoc = 0;
        for(j=1; j<i; j++)
            if(i%j==0) sUoc+=j;
        if(sUoc>i) printf("%d\t", i);
    }
}
int main(){
    int left, right;
    do{
        printf("Nhap L, R: ");
        scanf("%d%d", &left, &right);
    }while(left>100000||right>100000||left*right==0);
    soPhongPhu(left, right);
}
