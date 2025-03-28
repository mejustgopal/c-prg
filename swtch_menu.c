#include<stdio.h>
#include<stdlib.h>
void menu();
int main(){
    menu();
    return 0;
}
void menu()
{
    while(1)
    {
        int choice,x,f;
        printf("\n 1.Factorial");
        printf("\n 2. Even Odd");
        printf("\n 3. Area of circle");
        printf("\n 4. Sum of first n natural numbers");
        printf("\n 5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter a no. ");
                scanf("%d",&x);
                f=1;
                while(x)
                {
                    f=f*x;
                    x--;
                }
                printf("\nFactorial is %d",f);
                break;
            case 2:
                printf("Enter a no: ");
                scanf("%d",&x);
                x&1?printf("odd"):printf("Even");
                break;
            case 3:
                printf("Enter radius of circle");
                scanf("%d",&x);
                printf("\nArea is %f",3.14*x*x);
                break;
            case 4:
                printf("Enter a no. ");
                scanf("%d",&x);
                f=0;
                while(x)
                {
                    f=f+x;
                    x--;
                }
                printf("\nSum is %d",f);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
        }
    }

}