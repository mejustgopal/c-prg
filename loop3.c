#include<stdio.h>
int main()
{
	int i,a,s=0;
	printf("Enter numbers(last one should be 0)\n");
	while(1)
	{
	scanf("%d",&a);
	if(a==0)
		break;
	s=s+a;
	}
	printf("sum is %d",s);
	return 0;
}
