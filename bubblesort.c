#include<stdio.h>

void Bubble_sort(int a[])
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Sorted Array elements : ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
}




int main()
{
	int x[5],i;
	printf("Enter elements of array : ");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	Bubble_sort(x);
	return 0;
}
