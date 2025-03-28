#include<stdio.h>
int main()
{
//	int a,b,c;
//	printf ("Enter Two nos");
//	scanf("%d%d",&a,&b);
//	c=a;
//	a=b;
//	b=c;
//	printf("a = %d, b= %d",a,b);
//	int a,b;
//	printf("Enter two nos");
//	scanf("%d%d",&a,&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("Swapped Values are: %d and %d",a,b);
//	int a,b;
//	printf("Enter two nos");
//	scanf("%d%d",&a,&b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("Swapped Values are: %d and %d",a,b);
//	int a,b;
//	printf("Enter two nos");
//	scanf("%d%d",&a,&b);
//	a=a*b;
//	b=a/b;
//	a=a/b;
//	printf("Swapped Values are: %d and %d",a,b);
	int a,b;
	printf("Enter two nos");
	scanf("%d%d",&a,&b);
	a=a+b-(b=a);
	printf("Swapped Values are: %d and %d",a,b);
}
