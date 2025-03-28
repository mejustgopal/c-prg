#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	if(x>=100&&x<=999)
	printf("3-digit no.");
	else
	printf("not a 3-digit no.");
}
