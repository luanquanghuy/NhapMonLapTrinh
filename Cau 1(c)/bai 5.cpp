#include <stdio.h>
int UCLN(int x, int y){
    int r=x%y;
    while(r!=0){
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}
int BCNN(int x, int y){
    return x*y/UCLN(x, y);
}
int main(){
    int x, y;
    printf("Nhap x, y: ");
    scanf("%d%d", &x, &y);
    printf("UCLN %d\nBCNN %d", UCLN(x, y), BCNN(x, y));
}
