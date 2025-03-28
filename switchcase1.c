#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a,b;
    while (1)
    {
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication");
    printf("\n 4.Division");
    printf("\n 5. Exit");
    printf("\n Enter No.:- \n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("\nEnter Two Nos:-");
        scanf("%d%d",&a,&b);
        printf("Sum = %d",a+b);
        break;
    case 2:
        printf("\nEnter Two Nos:-");
        scanf("%d%d",&a,&b);
        printf("Difference = %d",a-b);
        break;
    case 3:
        printf("\nEnter Two Nos:-");
        scanf("%d%d",&a,&b);
        printf("Product = %d",a*b);
        break;
    case 4:
        printf("\nEnter Two Nos:-");
        scanf("%d%d",&a,&b);
        printf("Quotient = %d",a/b);
        break;
    case 5:
        exit(0);    //forcefully kills the program
    default:
        printf("Invalid Option");
        break;
    }
    }
    
    
    return 0;
}