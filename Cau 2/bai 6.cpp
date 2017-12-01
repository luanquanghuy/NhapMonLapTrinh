#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int i, n, dem=0;;
	puts("Nhap vao xau: ");
	gets(s);
	n=strlen(s);
	for(i=0; i<=n-2; i++){
		if((s[i-1]==' '||i==0)&&s[i]=='T'&&s[i+1]=='H') dem++;
	}
	printf("So tu bat dau TH la %d", dem);
}
