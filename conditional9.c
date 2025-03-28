#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number\n");
	scanf("%d",&x);
	if(x%7==0||x%3==0)
	printf("%d is divisible by 7 or 3",x);
	else
	printf("%d is not divisible by 7 or 3",x);
}
