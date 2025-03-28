#include<stdio.h>
int main ()
{
	int m;
	printf("Enter Marks");
	scanf("%d",&m);
	if (m>=300 && m<=500)
	printf("1st");
	else if(m>=225 && m<300)
	printf("2nd");
	else if (m>=150 && m<225)
	printf("3rd");
	else if (m>=0 && m<150)
	printf("Fail");
	else
	printf("Invalid");
}
