#include<stdio.h>
void dayMessage();
int main(){
    dayMessage();
    return 0;
}
void dayMessage()
{
    int d;
    printf("Enter Day No:-  ");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("Monday - Jai Mata Di");
        break;
    case 2:
        printf("Tuesday- Jai Bajrangbali");
        break;
    case 3:
        printf("Wednesday - Jai Bholenath");
        break;
    case 4:
        printf("Thursday - Om namo bhagvate vasudewaye namah");
        break;
    case 5:
        printf("Friday - Weekend aane wala hai!");
        break;
    case 6:
        printf("Saturday- Shani dev ki Jay ho");
        break;
    case 7:
        printf("Sunday- Chhutti ka din!");
        break;
    
    default:
        printf("Invalid option");
        break;
    }
}