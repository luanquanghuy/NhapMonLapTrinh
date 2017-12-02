#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int searchWord(char *s){
    int i=0,position=-1, n=strlen(s);
    char *p, key[50];
    puts("Nhap vao tu can tim: ");
    gets(key);
    p = (char*) malloc(sizeof(char*)*100); // cap bo nho
    p=strtok(s, " ,.");
    while(*p!=NULL){
        i++;
        if(strcmp(p, key)==0){
            position=i;
            break;
        }
        p=strtok(NULL, " ,.");
    }
    return position;
}
int main(){
    char s[100];
    puts("Nhap vao xau: ");
    gets(s);
    printf("Tu can tim o vi tri %d",searchWord(s));
}
