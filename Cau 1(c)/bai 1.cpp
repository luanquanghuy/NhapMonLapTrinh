#include <stdio.h>
int main(){
    int a, n1, n2, n3;
    do{
        printf("Nhap vao so co 3 chu so: ");
        scanf("%d", &a);
    }while(a<100||a>999);
    n3=a%10;
    n2=(a/10)%10;
    n1=a/100;
    if(n1>=n2&&n1>=n2) printf("Chu so lon nhat la %d nam o hang tram", n1);
    if(n2>=n1&&n2>=n3) printf("Chu so lon nhat la %d nam o hang chuc", n2);
    if(n3>=n2&&n3>=n1) printf("Chu so lon nhat la %d nam o hang don vi", n3);
    return 0;
}
