#include<stdio.h>

int main(){
    int r;
    float a;
    printf("\nEnter radius of the circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of the circle is %.2f having radius %d",a,r);
    return 0;
}