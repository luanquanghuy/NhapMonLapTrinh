#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int n, i;
	puts("Nhap vao xau:");
	gets(s);
	n=strlen(s);
	for(i=0; i<n;i++){
		if(s[i]>='a'&&s[i]<='z') s[i]-=32;
	}
	printf("Chuoi chu Hoa la: %s", s);
	return 0;
}
