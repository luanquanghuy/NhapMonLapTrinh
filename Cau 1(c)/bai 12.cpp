#include <stdio.h>
/* Cach 2:
int Fibonaci(int k){
    if(k==1 || k==2) return 1;
    else return Fibonaci(k-1) + Fibonaci(k-2);
}
*/
long F(int k){
    int i;
    long f[300];
    f[1]=1;
    f[2]=1;
    for(i=3; i<=k; i++) f[i]=f[i-1]+f[i-2];
    return f[k];
}
int main(){
    int k;
    do{
        printf("Nhap k: ");
        scanf("%d", &k);
    }while(k<=0);
 //   printf("So Fibonaci thu %d la: %d", k, Fibonaci(k));
    printf("So Fibonaci thu %d la: %ld", k, F(k));
}
