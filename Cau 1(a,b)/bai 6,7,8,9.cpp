#include <stdio.h>
void nhapMang(int a[], int &n){
    int i;
    printf("Nhap n: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
float bai6(int a[], int n){
    int i, s=0, dem=0;
    for(i=0; i<n; i++)
        if(a[i]%6==0){
            s+=a[i];
            dem++;
        }
    if(dem>0) return (float)s/dem;
    else return 0;
}
float bai7(int a[], int n){
    int i, s=0, dem=0;
    for(i=0; i<n; i++)
        if(a[i]%2!=0 && a[i]%5==0){
            s+=a[i];
            dem++;
        }
    if(dem>0) return (float)s/dem;
    else return 0;
}
void bai8(int a[], int n, int &aMax, int &iMax){
    int i;
    aMax = a[0];
    iMax = 0;
    for(i=1; i<n; i++)
        if(a[i]>aMax){
            aMax = a[i];
            iMax = i;
        }
}
int bai9(int a[], int n){
    int i, aMin, iMin;
    aMin = a[0];
    iMin = 0;
    for(i=1; i<n; i++)
        if(a[i]<aMin){
            aMin = a[i];
            iMin = i;
        }
    return iMin;
}
int main(){
    int a[100], n, choose;
    int aMax, iMax, iMin;
    nhapMang(a, n);
    do{
        printf("\n1. Bai 6\n2. Bai 7\n3. Bai 8\n4. Bai 9\nChon: ");
        scanf("%d", &choose);
        switch(choose){
        case 6:
            printf("Trung binh so chan chia het cho 3 la: %f", bai6(a, n));
            break;
        case 7:
            printf("Trung binh so le chia het cho 5 la : %f", bai7(a, n));
            break;
        case 8:
            bai8(a, n, aMax, iMax);
            printf("Phan tu %d co gia tri lon nhat la %d", iMax, aMax);
            break;
        case 9:
            iMin = bai9(a, n);
            printf("Phan tu %d co gia tri nho nhat la %d", iMin, a[iMin]);
            break;
        }
    }while(choose);
}
