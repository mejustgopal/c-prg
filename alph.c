#include<stdio.h>
int main(){
	char alph;
	printf("Enter alphabet");
	scanf("%c",&alph);
	if(alph>='a'&&alph<='z')
	printf("Lowercase alphabet");
	else if(alph>='A'&&alph<='Z')
	printf("Uppercase alphabet");
	else
	printf("Invalid");
}
