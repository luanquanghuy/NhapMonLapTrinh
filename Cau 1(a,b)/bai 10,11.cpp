#include <stdio.h>
void nhapMang(int a[], int &n){
    int i;
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<=1||n>=100);
    for(i=0; i<n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    int i;
    printf("\n");
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}
void sortTangDan(int a[], int n){
    int temp, i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
void sortGiamDan(int a[], int n){
    int temp, i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
        if(a[i]<a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
}
int main(){
    int a[100], n;
    char choose;
    nhapMang(a, n);
    xuatMang(a, n);
    do{
        printf("\na. Sap xep tang dan\nb. Sap xep giam dan\nChon: ");
        scanf("%*c%c", &choose);
        switch(choose){
        case 'a':
            puts("Mang sap xep tang dan la: ");
            sortTangDan(a, n);
            xuatMang(a, n);
            break;
        case 'b':
            puts("Mang sap xep giam dan la: ");
            sortGiamDan(a, n);
            xuatMang(a, n);
        }
    }while(choose);
}
