#include <stdio.h>
void soTamHoa(){
    int i, j, k;
    puts("So tam hoa la:");
    for(i=1; i<=9; i++)
        for(j=0; j<=9; j++)
            for(k=0; k<=9; k++)
                if(i+j+k==i*j*k) printf("%d%d%d\t", i, j, k);
}
int main(){
    soTamHoa();
}
