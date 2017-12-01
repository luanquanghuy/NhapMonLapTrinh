#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	puts("Nhap vao chuoi");
	gets(s);
	int ok=1, n=strlen(s);
	for(int i=0; i<n; i++){
		if(s[i]<'0'||s[i]>'9'){
			ok=0;
			break;
		}
	}
	if(ok) printf("Xau toan so");
	else printf("Xau khong phai toan so");
	return 0;
}
