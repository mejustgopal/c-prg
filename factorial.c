#include<stdio.h>
int fact(int num)
{
	if(num==0 || num == 1)
		return 1;
	return num * fact(num -1);
}
int main()
{
	int x,result;
	printf("Enter a no ");
	scanf("%d",&x);
	result = fact(x);
	printf("%d",result);
}
