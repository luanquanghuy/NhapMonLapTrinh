#include <stdio.h>
void nhapMang(int a[], int &n){
    int i;
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<=1||n>=100);
    for(i=0; i<n; i++){
        printf("Nhap a[%d]: ");
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    int i;
    printf("\n");
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}
void bai18(int a[], int &n){
    int i, j, nUoc;
    for(i=0; i<n; i++){
        nUoc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUoc++;
        if(nUoc==2) {
                for(j=i+1; j<n; j++) a[j-1]=a[j];
                n--;
                i--;
        }
    }
}
void bai19(int a[], int n){
    int i, nAm=0, nDuong=0;
    for(i=0; i<n; i++){
        if(a[i]>0) nDuong++;
        else if(a[i]<0) nAm++;
    }
    printf("\nSo am trong mang la %d\nSo duong trong mang la %d", nAm, nDuong);
}
void bai20(int a[], int n){
    int i, x, dem=0;
    printf("\nNhap x: ");
    scanf("%d", &x);
    for(i=0; i<n; i++)
        if(a[i]==x) dem++;
    printf("So lan xuat hien cua %d la %d", x, dem);
}

int main(){
	int a[100], n;
	nhapMang(a, n);
	xuatMang(a, n);
	bai18(a, n);
	xuatMang(a, n);
	bai19(a, n);
	bai20(a, n);
	return 0;
}
