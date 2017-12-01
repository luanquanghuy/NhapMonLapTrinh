#include <stdio.h>
#include <string.h>
int main(){
	char s1[100], s2[100];
	int n1, n2, n, i, kq=0;
	puts("Nhap xau thu 1:");
	gets(s1);
	n1=strlen(s1);
	puts("Nhap xau thu 2:");
	gets(s2);
	n2=strlen(s2);
	n=n1;
	if(n2>n1) n=n2;
	for(i=0; i<n; i++){
		if(s1[i]<s2[i]){
			kq=1;
			break;
		}
		else if (s1[i]>s2[i]){
			kq=-1;
			break;
		}
	}
	if(kq>0) puts("Xau 1 lon hon xau 2");
	else if(kq<0) puts("Xau 2 lon hon xau 1");
	else puts("2 xau bang nhau");
}
