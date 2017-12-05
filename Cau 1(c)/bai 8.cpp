#include <stdio.h>
void soHoanHao(int k){
    int sUoc, i, j;
    printf("So hoan hao nho hon %d la\n", k);
    for(i=1; i<=k; i++){
        sUoc = 0;
        for(j=1; j<i; j++)
            if(i%j==0) sUoc+=j;
        if(sUoc==i) printf("%d\t", i);
    }
}
int main(){
    int k;
    printf("Nhap k: ");
    scanf("%d", &k);
    soHoanHao(k);
}
