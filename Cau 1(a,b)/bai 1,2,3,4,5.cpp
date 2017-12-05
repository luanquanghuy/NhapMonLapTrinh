#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int& n){
    int i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    int i;
    puts("Cac phan tu cua mang:");
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}
float bai1(int a[], int n){
    int i, dem=0, sAm=0;
    for(i=0; i<n; i++)
        if(a[i]<0){
            sAm+=a[i];
            dem++;
        }
    if(dem>0) return (float)sAm/dem;
    else return 0;
}
float bai2(int a[], int n){
    int i, sDuong=0, dem=0;
    for(i=0; i<n; i++)
        if(a[i]>0){
            sDuong+=a[i];
            dem++;
        }
    if(dem>0) return (float)sDuong/dem;
    else return 0;
}
float bai3(int a[], int n){
    int i, j, sNT=0, dem=0, nUoc;
    for(i=0; i<n; i++){
        nUoc=0;
        for(j=1; j<=a[i]; j++) if(a[i]%j==0) nUoc++;
        if(nUoc==2){
            sNT+=a[i];
            dem++;
        }
    }
    if(dem>0) return (float)sNT/dem;
    else return 0;
}
float bai4(int a[], int n){
    int i, j, sHoanHao=0, dem=0, sUoc;
    for(i=0; i<n; i++){
        sUoc = 0;
        for(j=1; j<=a[i]/2; j++) if(a[i]%j==0) sUoc+=j;
        if(a[i]==sUoc){
            sHoanHao+=a[i];
            dem++;
        }
    }
    if(dem>0) return (float)sHoanHao/dem;
    else return 0;
}
float bai5(int a[], int n){
    int i, j, sChinhPhuong=0, dem=0;
    for(i=0; i<n; i++){
        j= (int)sqrt(a[i]);
        if(pow(j, 2)==a[i]){
            sChinhPhuong+=a[i];
            dem++;
        }
    }
    if(dem>0) return (float)sChinhPhuong/dem;
    else return 0;
}
int main(){
    int a[100], n, choose;
    nhapMang(a, n);
    xuatMang(a, n);
    do{
        puts("\n1. bai 1\n2. bai 2\n3. bai 3\n4. bai 4\n5. bai 5");
        printf("Chon: ");
        scanf("%d", &choose);
        switch(choose){
        case 1:
            printf("Gia tri trung binh cac so am la: %f", bai1(a, n));
            break;
        case 2:
            printf("Gia tri trung binh cac so duong la: %f", bai2(a, n));
            break;
        case 3:
            printf("Gia tri trung binh cac so nguyen to la: %f", bai3(a, n));
            break;
        case 4:
            printf("Gia tri trung binh cac so hoan hao la: %f", bai4(a, n));
            break;
        case 5:
            printf("Gia tri trung binh cac so chinh phuong la: %f", bai5(a, n));
            break;
        }
    }while(choose);
}
