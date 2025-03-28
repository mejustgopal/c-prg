#include<stdio.h>
#include<stdlib.h>
void fn();
int main(){
    fn();
    return 0;
}
void fn()
{
    while(1)
    {
        int choice,a,b,c;
        printf("\n 1. Check Isoceles trianle");
        printf("\n 2. Check Rt.Angled trianle");
        printf("\n 3. Check Equilateral trianle");
        printf("\n 4. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && c+a>b)
                    if(a==b || b==c || c==a)
                    printf("\n Isoceles Triangle");
                    else
                    printf("\n Not an Isoceles Triangle");
                else
                    printf("\nNot a Valid triangle");
                break;
            case 2:
                printf("\nEnter sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && c+a>b)
                    if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
                        printf("\nRt.Angled Triangle");
                    else
                        printf("\n not a Rt.Angled Triangle");
                else
                    printf("\nNot a valid triangle");
                break;
            case 3:
                printf("Enter sides of a triangle");
                scanf("%d%d%d",&a,&b,&c);
                if(a+b>c && b+c>a && c+a>b)
                    if(a==b&&b==c)
                        printf("\nEquilateral triangle");
                    else
                        printf("\nNot an Equilateral triangle ");
                else
                    printf("\nNot a valid triangle");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice! Plz Retry! ");
        }

    }
}