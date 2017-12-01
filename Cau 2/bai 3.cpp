#include <stdio.h>
#include <string.h>
int getNTu(char *s){
	int i, nTu=0;
	int n=strlen(s);
	for(i=0; i<n; i++){
		if(i==0&&s[i]!=' '||s[i]!=' '){
			nTu++;
			while(s[i]!=' '){
				i++;
				if(s[i]==' ') break;
			}
		}
	}
	return nTu;
}
int main(){
	char s[100];
	puts("Nhap vao xau: ");
	gets(s);
	printf("So tu cua xau la %d", getNTu(s));
	return 0;
}
