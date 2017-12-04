#include <stdio.h>
void nhiPhan(int k){
    int n=k, a[100], i=0;
    while(n!=0){
        a[i++]=n%2;
        n/=2;
    }
    printf("Day nhi phan cua %d la: \n", k);
    for(i--; i>=0; i--){
        printf("%d", a[i]);
    }
}
int main(){
    int k;
    printf("Nhap k: ");
    scanf("%d", &k);
    nhiPhan(k);
}
