#include<stdio.h>
int main(){
	char ch;
	printf("Enter Character");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	printf("Lowercase alphabet");
	else if(ch>='A'&&ch<='Z')
	printf("Uppercase alphabet");
	else if(ch>='0'&&ch<='9')
	printf("digit");
	else
	printf("Special Characters");
}
