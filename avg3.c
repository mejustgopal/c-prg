#include<stdio.h>

int main(){
    int a,b,c;
    float avg;
    printf("\nEnter first no.");
    scanf("%d",&a);
    printf("\n Enter second no.");
    scanf("%d",&b);
    printf("\n Enter third no.");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("Average is %f",avg);
    return 0;
}