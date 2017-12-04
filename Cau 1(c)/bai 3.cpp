#include <stdio.h>
int main(){
    int month;
    do{
        printf("Nhap vao thang: ");
        scanf("%d", &month);
    }while(month<1||month>12);
    switch(month){
        case 2: printf("Thang %d co 28 ngay.", month);
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("Thang %d co 31 ngay.", month); break;
        default : printf("Thang %d co 30 ngay.", month);
    }
    return 0;
}
