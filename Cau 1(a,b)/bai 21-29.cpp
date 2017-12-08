#include <stdio.h>

void bai21(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        if(a[i]%2!=0)
            for(j=i+1; j<n; j++)
                if(a[j]%2!=0 && a[i]>a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
}

void bai22(int a[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        if(a[i]%2==0)
            for(j=i+1; j<n; j++)
                if(a[i]%2==0 && a[i]<a[j]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    }
}

void bai23(int a[], int &n){
    int i, x, k;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap k: ");
    scanf("%d", &k);
    for(i=n-1; i>=k+1; i++)
        a[i+1]=a[i];
    a[k+1] = x;
    n++;
}

int bai24(int a[], int &n){
    int i, j, xoa=-1, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    for(i=0; i<n; i++)
        if(a[i]==x){
            for(j=i; j<n; j++) a[j] = a[j+1];
            n--;
            xoa++;
        }
    return xoa;
}

int bai25(int a[], int n){
    int i, j, ok, dem=0;
    for(i=0; i<n; i++){
        ok=1;
        for(j=0; j<i; j++)
            if(a[i]==a[j]){
                ok=0;
                break;
            }
        if(ok) dem++;
    }
    return dem;
}

void bai26(int a[], int &n){
    int i, j, x;
    printf("Nhap x: ");
    scanf("%d", &x);
    for(i=0; i<n; i++)
        if(a[i]>x){
            for(j=n-1; j>=i; j++) a[j+1]=a[j];
            a[i] = x;
            n++;
            break;
        }
}

int bai27(int a[], int n){
    int maxChan=1, result = 0;
    printf("%d", maxChan);
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            if(maxChan==1 || a[i]>maxChan) maxChan = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]>maxChan || maxChan == 1){
            if(result == 0 || a[i]<result) result = a[i];
        }
    }
    return result;
}
/* Cach 2
int bai27(int a[], int n){
    int i, chanMax, leMin=0;
    // gan gia tri so chanMax = 1 so chan dau tien
    for(i=0; i<n; i++)
        if(a[i]%2 == 0){
            chanMax = a[i];
            break;
        }
    // tim so chan lon nhat
    for(i=0; i<n; i++)
        if(a[i]%2 == 0 && a[i] > chanMax) chanMax = a[i];
    // tim so le nho nhat ma lon hon tat ca so chan
    for(i=0; i<n; i++)
        if(a[i] > chanMax){
            leMin = a[i];
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]<leMin && a[i]>chanMax) leMin = a[i];
    //
    return leMin;
}
*/
int bai28(int a[], int n){
    int minLe=0, maxChan=1;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            if(minLe==0 || a[i]<minLe) minLe = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]<minLe || minLe == 0){
            if(maxChan==1 || a[i]>maxChan) maxChan = a[i];
        }
    }
    return maxChan;
}
/*
int bai28(int a[], int n){
    int i, leMin, chanMax=1;
    for(i=0; i<n; i++)
        if(a[i]%2!=0){
            leMin = a[i];
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]<leMin && a[i]%2!=0) leMin = a[i];
    for(i=0; i<n; i++)
        if(a[i]<leMin){
            chanMax = a[i];
            break;
        }
    for(i=0; i<n; i++)
        if(a[i]>chanMax && a[i]<leMin) chanMax = a[i];
    return chanMax;
}
*/

int bai29(int a[], int n){
    int arr[n],nArr =0, dem[n], i, j, newV, maxDem;
    for(i=0; i<n; i++){
        newV = 1;
        for(j=0; j<nArr; j++)
            if(arr[j]==a[i]){
                newV = 0;
                dem[j]++;
            }
        if(newV){
            dem[nArr] = 1;
            arr[nArr++] = a[i];
        }
    }
    maxDem =dem[0];
    for(i=0; i<nArr; i++)
        if(dem[i]>maxDem) maxDem = dem[i];
    return maxDem;
}

int main(){
	int a[100] = {-13, -1, -10, -4, -11, -3, -7, 3, 1, -2}, n=10;
	printf("So le nho nhat ma lon hon moi so chan la %d", bai27(a, n));
	return 0;
}
