#include <stdio.h>
#include <math.h>
void nhapMang(int a[], int &n){
    int i;
    do{
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n<=1 || n>=100);
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
void bai12(int a[], int n){
    int i, j, nUoc;
    puts("So nguyen to trong mang la: ");
    for(i=0; i<n; i++){
        nUoc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUoc++;
        if(nUoc==2)printf("%d\t");
    }
}
int bai13(int a[], int n, int &k){
    int i, j, nUOc, nNT=0;
    printf("Nhap k:");
    scanf("%d", &k);
    for(i=0; i<n; i++){
        nUOc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUOc++;
        if(nUOc==2&&a[i]<k) nNT++;
    }
    return nNT;
}
void bai14(int a[], int n){
    int i, r;
    puts("So chinh phuong nam tai vi tri le la:");
    for(i=0; i<n; i++){
        r = sqrt(a[i]);
        if(pow(r, 2)==a[i] && (i+1)%2!=0) printf("%d\t", a[i]);
    }
}
int main(){
	int a[100], n, k;
	char ch;
	nhapMang(a, n);
	xuatMang(a, n);
	do{
        printf("\na. Bai 12\nb. Bai 13\nc. Bai 14\nChon: ");
        scanf("%c", &ch);
        switch(ch){
        case 'a':
            bai12(a, n);
            break;
        case 'b':
            printf("So nguyen to nho hon %d trong mang la %d", k, bai13(a, n, k));
            break;
        case 'c':
            bai14(a, n);
        }
	}while(ch!='0');
	return 0;
}
