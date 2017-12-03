#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char s[100];
    int n, i=0;
    puts("Nhap vao xau:");
    gets(s);
    n=strlen(s);
    char *pch, *pchMax;
    int nMax;
//   pch=(char*) malloc(sizeof(char*)*100);
//  pchMax=(char*) malloc(sizeof(char*)*100);
    pch=strtok(s, " ,.");
    nMax=strlen(pch);
    pchMax=pch;
    while(pch!=NULL){
        if(strlen(pch)>nMax){
            nMax=strlen(pch);
            pchMax=pch;
        }
        pch=strtok(NULL, " ,.");
    }
    printf("Tu dai nhat trong xau la \"%s\"", pchMax);
}
