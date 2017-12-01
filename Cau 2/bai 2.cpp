#include <stdio.h>
#include <string.h>
char* xoaSpace2Dau(char *s){
	int n=strlen(s);
	int i, j, nSpace;
	for(i=0; i<n; i++){
		nSpace=0;
		// dem so space giua 2 tu
		if(s[i]!=' '&&s[i+1]==' ') for(j=i+1; j<=n; j++){
			if(s[j]==' ') nSpace++;
			else if(s[j]==NULL) nSpace=0;
			else break;
		}
		if(nSpace>0) for(j=i+1+nSpace; j<=n; j++){
			s[j+1-nSpace]=s[j];
		}
	}
	return s;
}

int main(){
	char s[100];
	printf("Nhap vao chuoi :");
	gets(s);
	puts("Chuoi sau khi loai bo khoang trang giua cac tu");
	printf("\"%s\"", xoaSpace2Dau(s));
}
