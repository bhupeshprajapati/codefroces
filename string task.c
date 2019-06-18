#include<stdio.h>
int main() {
	char str[100],ch;
	int i;
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++) {
		ch=str[i];
		if(ch>=65&&ch<=90||ch>=97&&ch<=122) {
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='y'||ch=='Y'||ch=='E'||ch=='I'||ch=='O'||ch=='U') continue;
			else {
				if(isupper(ch)) {
					printf(".%c",ch+32);
				} else
					printf(".%c",ch);
			}
		} else printf("%c",ch);
	}
}

