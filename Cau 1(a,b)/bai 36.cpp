#include <stdio.h>

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void xuatMang(int a[], int n){
    int i;
    printf("\n");
    for(i = 0; i < n; i++) printf("%d\t", a[i]);
}

void nhapMang(int a[], int &n){
    int i;
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n <= 1 || n >= 100);
    for(i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void sapXepMang(int a[], int n){
    int i, l, r;
    l = 0;
    r = n - 1;
    for(i = 0; i <= r; i++)
        if(a[i] > 0){
            if(i>l) swap(a[i], a[l]);
            l++;
        }
        else if(a[i] == 0){
            if(i<r) swap(a[i], a[r]);
            r--;
        }
}

int main(){
    int a[100], n;
    nhapMang(a, n);
    xuatMang(a, n);
    sapXepMang(a, n);
    xuatMang(a, n);
}
