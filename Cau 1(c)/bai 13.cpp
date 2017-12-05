#include <stdio.h>
#include <math.h>
int main(){
    int n, a[100], i;
    double x, p=0;
    printf("Nhap n, x: ");
    scanf("%d%lf", &n, &x);
    for(i=0; i<=n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<=n; i++) p+=a[i]*pow(x, i);
    printf("P = %lf", p);
}
