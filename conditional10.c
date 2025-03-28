#include<stdio.h>
int main()
{
	int x;
	printf("Enter an integer:-\n");
	scanf("%d",&x);
	if(x>0)
	printf("%d is Positive Integer",x);
	else if(x<0)
	printf("%d is Negative Integer",x);
	else
	printf("%d is zero",x);
}
