#include<stdio.h>

int main(){
    float cp,sp,profit;

    printf("Enter cp and sp of 12 bananas:-\n");
    scanf("%f%f",&cp,&sp);

    profit=(sp-cp)*25/12;

    printf("profit is %f",profit);
    return 0;
}