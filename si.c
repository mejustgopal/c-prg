#include<stdio.h>
main()
{
	float p;
	int r;
	int t;
	printf("Enter principle\n");
	scanf("%f",&p);
	printf("Enter rate\n");
	scanf("%d",&r);
	printf("Enter time\n");
	scanf("%d",&t);
	printf("The value of S.I. is %f",(p*r*t)/100);
	
}
