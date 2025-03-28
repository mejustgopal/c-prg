//#include<stdio.h>
//int main()
//{
//	int length,breadth;
//	printf("Enter length\n");
//	scanf("%d",&length);
//	printf("Enter breadth\n");
//	scanf("%d",&breadth);
//	printf("The area of rectangle is %d",length*breadth);
//	return 0;	
//}
#include<stdio.h>
int main(){
	float r,h;
	printf("Enter radius\n");
	scanf("%f",&r);
	printf("Enter height\n");
	scanf("%f",&h);
	printf("Area of circle is %f\n",3.14*r*r);
	printf("\nvol of cylinder is %f",3.14*r*r*h);
}
