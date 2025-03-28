#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter sides of a triangle:-\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b)
	printf("Triangle can be formed");
	else
	printf("Triangle can't be formed");
}
