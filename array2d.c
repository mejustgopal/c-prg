#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int n[row][col];
	int i,j;
	printf("\n enter values in %d *%d matrix",row,col);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&n[i][j]);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%5d",n[i][j]);
		printf("\n");
	}
	
}
