#include <stdio.h>
int main()
{
	int x;
	printf("Enter Number\n");
	scanf("%d", &x);
	x > 0 ? printf("Positive") : printf("Non Positive");
}
