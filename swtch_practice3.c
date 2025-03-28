#include <stdio.h>
void fn();
int main()
{
    fn();
    return 0;
}
void fn()
{
    int x;
    printf("Enter option");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("Invalid choice");
        break;
    }
}