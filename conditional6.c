#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two Nos:-\n");
	scanf("%d%d",&x,&y);
//	if(x>y)
//	printf("%d",x);
//	else
//	printf("%d",y);
//	x>y?printf("%d",x):printf("%d",y);
	printf("%d",x>y?x:y);
}
