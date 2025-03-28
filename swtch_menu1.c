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
        int choice,a,b,c,L;
        printf("\n 1. L.C.M.");
        printf("\n 2. SUM OF DIGITS OF NO.");
        printf("\n 3. VOLUME OF A CUBOID");
        printf("\n 4. PRIME OR NOT PRIME");
        printf("\n 5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two nos :");
                scanf("%d%d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                {
                    if(L%a==0 && L%b==0)
                    {
                        printf("L.C.M. is %d",L);
                        break;
                    }
                }
                break;
            case 2:
                printf("Enter a no: ");
                scanf("%d",&a);
                b=0;
                while(a)
                {
                    b=b+a%10;
                    a=a/10;
                }
                printf("Sum is %d",b);
                break;
            case 3:
                printf("Enter sides of cuboid");
                scanf("%d%d%d",&a,&b,&c);
                printf("\n Volume of cuboid is %d",a*b*c);
                break;
            case 4:
                printf("Enter a no. ");
                scanf("%d",&a);
                for (b = 2;b<a;b++)
                    if(a%b==0)
                        break;
                if(a==b)
                    printf("%d is prime",a);
                else
                    printf("%d is not prime",a);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
        }
    }

}