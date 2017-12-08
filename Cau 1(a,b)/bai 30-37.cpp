#include <stdio.h>
// bai 30
int isDoiXung(int a[], int n){
    int i;
    for(i=0; i<n/2; i++) if(a[i]!=a[n-1-i]) return 0;
    return 1;
}
// bai 31
int isAllNguyenTo(int a[], int n){
    int i, j, nUoc;
    for(i=0; i<n; i++){
        nUoc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUoc++;
        if(nUoc != 2) return 0;
    }
    return 1;
}
// bai 32
int timSoDuongMin(int a[], int n){
    int i, soDuongMin=0;
    for(i=0; i<n; i++)
        if(a[i]>0){
            soDuongMin = a[i];
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]>0 && a[i]<soDuongMin) soDuongMin = a[i];
    return soDuongMin;
}
// bai 33
int timSoDuongMax(int a[], int n){
    int i, soAmMax=0;
    for(i=0; i<n; i++)
        if(a[i]<0){
            soAmMax = a[i];
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]<0 && a[i]>soAmMax) soAmMax = a[i];
    return soAmMax;
}
// bai 34
void tachSoNguyenTo(int a[], int &n, int b[], int &m){
    int i, j, nUoc;
    m = 0;
    for(i=0; i<n; i++){
        nUoc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUoc++;
        if(nUoc==2){
            b[m++] = a[i];
            for(j=i; j<n-1; j++) a[j] = a[j+1];
            n--;
            i--;
        }
    }
}
// bai 35
void tachSo(int a[], int n, int b[], int &n1, int c[], int n&2){
    int i;
    n1=0;
    n2=0;
    for(i=0; i<n; i++)
        if(a[i]>0) b[n1++] = a[i];
        else c[n2++] = a[i];
}
// bai 37
void editSoNguyenTo(int a[], int n){
    int i, j, nUoc;
    for(i=0; i<n; i++){
        nUoc = 0;
        for(j=1; j<=a[i]; j++)
            if(a[i]%j==0) nUoc++;
        if(nUoc==2) a[i]=0;
    }
}
int main(){
	// Write code here
	return 0;
}
