#include<stdio.h>
int main(){
	int cp,sp;
	float pp,lp;
	printf("Enter cp and sp :- \n");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		pp=((sp-cp)/(float)cp)*100;
		printf("Profit Percentage is %.2f%%",pp);
	}
	else
	{
		lp=((cp-sp)/(float)cp)*100;
		printf("Loss Percentage is %.2f%%",lp);
	}
}
