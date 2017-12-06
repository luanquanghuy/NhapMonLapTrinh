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
void inMang(int a[], int n){
    int i;
    printf("\n");
    for(i=0; i<n; i++) printf("%d\t", a[i]);
}
int bai15(int a[], int n, int &x){
    int i;
    printf("Nhap x:");
    scanf("%d", &x);
    for(i=0; i<n; i++)
        if(a[i]==x) return i;
    return -1;
}
int bai16(int a[], int n, int &x){
    int i;
    printf("Nhap x: ");
    scanf("%d", &x);
    for(i=n-1; i>=0; i--)
        if(a[i]==x) return i;
    return -1;
}
int bai17(int a[], int n){
    int i, aMax, iMax=-1;
    for(i=0; i<n; i++)
        if(a[i]<0){
            aMax = a[i];
            iMax = i;
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]>aMax&&a[i]<0){
            aMax = a[i];
            iMax = i;
        }
    return iMax;
}
int main(){
	int a[100], n, x;
	char ch;
	nhapMang(a, n);
	inMang(a, n);
	do{
        printf("\na. Bai 15\nb. Bai 16\nc. Bai 17\nChon: ");
        scanf("%*c%c", &ch);
        switch(ch){
        case 'a':
            printf("Vi tri phan tu %d dau tien la %d", x, bai15(a, n, x));
            break;
        case 'b':
            printf("Vi tri phan tu %d cuoi cung la %d", x, bai16(a, n, x));
            break;
        case 'c':
            printf("Vi tri phan tu am lon nhat la %d", bai17(a, n));
        }
	}while(ch!='0');
	return 0;
}
