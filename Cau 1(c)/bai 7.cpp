#include <stdio.h>
#include <math.h>
double tinhS1(int k){
    double s = 0.0, mau=0;
    int i;
    for(i=1; i<=k; i++){
        mau+=pow(i, 2);
        s+=pow(-1, i+1)/mau;
    }
    return s;
}
long tinhS2(int k){
    int i;
    long s=0, num=1;
    for(i=1;i<=k;i++){
        num*=i;
        s+=pow(-1, i+1)*num;
    }
    return s;
}
double tinhS3(int k){
    int i;
    double s=1, mau=1;
    for(i=1; i<=k; i++){
        mau*=i;
        s+=pow(-2, i)/mau;
    }
    return s;
}
double tinhS4(int k){
    int i;
    double s=0, mau=0;
    for(int i=1;i<=k; i++){
        mau+=pow(i, 2);
        s+=1/mau;
    }
    return s;
}
double tinhS5(int k){
    int i;
    double s=0;
    for(i=1; i<=k; i++) s+=pow(-1, i+1)/(2*i);
    return s;
}
double tinhS6(int k){
    int i;
    double s=0, mau=0;
    for(i=1;i<=k;i++){
        mau+=i;
        s+=pow(-1, i+1)/mau;
    }
    return s;
}
double tinhS7(int k){
    int i;
    double mau=1, s=1;
    for(i=1;i<=k; i++){
        mau*=i;
        s+=pow(2, i)/mau;
    }
    return s;
}
double tinhS8(int k){
    int i;
    double mau=1, s=0;
    for(i=1;i<=k;i++){
        mau*=i;
        s+=pow(-1, i+1)/mau;
    }
    return s;
}
int main(){
    int k;
    printf("Nhap k: ");
    scanf("%d", &k);
    printf("\nS1 = %lf", tinhS1(k));
    printf("\nS2 = %ld", tinhS2(k));
    printf("\nS3 = %lf", tinhS3(k));
    printf("\nS4 = %lf", tinhS4(k));
    printf("\nS5 = %lf", tinhS5(k));
    printf("\nS6 = %lf", tinhS6(k));
    printf("\nS7 = %lf", tinhS7(k));
    printf("\nS8 = %lf", tinhS8(k));
}
