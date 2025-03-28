#include<stdio.h>
int main()
{
//	char x='A';
//	x++;
//	printf("%c",x);
//	int x;
//	printf("Enter a no.");
//	scanf("%d",&x);
//	x%=10;
//	printf("Unit digit = %d",x);
	int x;
	printf("Enter a no.");
	scanf("%d",&x);
	x/=10;
	printf("Number without last digit = %d",x);
}
