#include<stdio.h>
void grade();
int main(){
    grade();
    return 0;
}
void grade()
{
    int marks;
    printf("Enter Marks:- ");
    scanf("%d",&marks);
    switch (marks)
    {
    case 90 ... 100:
        printf("\n Grade A");
        break;
    case 80 ... 89:
        printf("\n Grade B");
        break;
    case 70 ... 79:
        printf("\n Grade C");
        break;
    case 60 ... 69:
        printf("\n Grade D");
        break;
    case 50 ... 59:
        printf("\n Grade E");
        break;
    case 0 ... 49:
        printf("\n Grade F");
        break;
    default:
        printf("\n Invalid Marks");
        break;
    }
}