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
int main(){
	// Write code here
	return 0;
}
