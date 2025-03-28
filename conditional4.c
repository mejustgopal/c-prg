#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	if(x&1)
	printf("Odd");
	else
	printf("Even");
}
