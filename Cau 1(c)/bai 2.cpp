#include <stdio.h>
int main(){
    int a, n1, n2, n3, temp;
    do{
        printf("Nhap vao so co 3 chu so: ");
        scanf("%d", &a);
    }while(a<100||a>999);
    n1=a/100;
    n2=(a/10)%10;
    n3=a%10;
    if(n1>n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n2>n3){
        temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n1>n2){
        temp = n1;
        n1= n2;
        n2=temp;
    }
    printf("Thu tu tang dan cac so la: %d%d%d", n1, n2, n3);
    return 0;
}
