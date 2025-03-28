#include<stdio.h>
int main()
{
	int p,c,m,e,h;
	printf("Enter Physics marks(obtained out of 100):-\n");
	scanf("%d",&p);
	printf("Enter Chemistry marks(obtained out of 100):-\n");
	scanf("%d",&c);
	printf("Enter Maths marks(obtained out of 100):-\n");
	scanf("%d",&m);
	printf("Enter English marks(obtained out of 100):-\n");
	scanf("%d",&p);
	printf("Enter Hindi marks(obtained out of 100):-\n");
	scanf("%d",&h);
	if(p>=33&&c>=33&&m>=33&&e>=33&&h>=33)
	printf("Candidate has successfully passed the examination");
	else
	printf("Candidate has failed the exam");
}
